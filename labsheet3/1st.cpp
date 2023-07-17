#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

// Structure to represent a node in the graph
struct Node {
    int x, y;      // Coordinates of the node
    int g, h, f;   // Cost values for path calculation
    vector<Node*> neighbors;
    Node* parent;

    Node(int x, int y) : x(x), y(y), g(0), h(0), f(0), parent(nullptr) {}

    // Calculate the heuristic value (Euclidean distance) to the goal node
    void calculateHeuristic(Node* goal) {
        h = sqrt(pow((x - goal->x), 2) + pow((y - goal->y), 2));
    }

    // Calculate the cost from the start node to this node
    void calculateCost(Node* start) {
        if (start != nullptr)
            g = start->g + 1;  // Assuming uniform edge costs of 1
    }

    // Calculate the total cost (f = g + h)
    void calculateTotalCost() {
        f = g + h;
    }
};

// Custom comparator for the priority queue
struct CompareNodes {
    bool operator()(const Node* lhs, const Node* rhs) const {
        return lhs->f > rhs->f;
    }
};

// A* algorithm to find the shortest path
vector<Node*> AStar(Node* start, Node* goal) {
    priority_queue<Node*, vector<Node*>, CompareNodes> openSet;
    vector<Node*> closedSet;

    start->calculateHeuristic(goal);
    start->calculateCost(nullptr);
    start->calculateTotalCost();

    openSet.push(start);

    while (!openSet.empty()) {
        Node* current = openSet.top();
        openSet.pop();

        if (current == goal) {
            // Goal reached, construct the path
            vector<Node*> path;
            Node* node = current;
            while (node != nullptr) {
                path.push_back(node);
                node = node->parent;
            }
            reverse(path.begin(), path.end());
            return path;
        }

        closedSet.push_back(current);

        for (Node* neighbor : current->neighbors) {
            if (find(closedSet.begin(), closedSet.end(), neighbor) != closedSet.end())
                continue;  // Ignore already visited nodes

            neighbor->calculateCost(current);
            neighbor->calculateHeuristic(goal);
            neighbor->calculateTotalCost();

            auto openSetIterator = find(openSet.begin(), openSet.end(), neighbor);
            if (openSetIterator == openSet.end()) {
                // Add to open set if not already present
                openSet.push(neighbor);
                neighbor->parent = current;
            } else {
                // Update cost and parent if a better path is found
                if (neighbor->g < (*openSetIterator)->g) {
                    (*openSetIterator)->g = neighbor->g;
                    (*openSetIterator)->parent = current;
                }
            }
        }
    }

    // No path found
    return vector<Node*>();
}

int main() {
    // Create the graph
    Node* start = new Node(0, 0);
    Node* goal = new Node(5, 5);
    Node* node1 = new Node(1, 1);
    Node* node2 = new Node(2, 2);
    Node* node3 = new Node(3, 3);
    Node* node4 = new Node(4, 4);

    // Set up the neighbors
    start->neighbors = { node1 };
    node1->neighbors = { node2, node3 };
    node2->neighbors = { node4 };
    node3->neighbors = { goal };
    node4->neighbors = { goal };

    // Run A* algorithm
    vector<Node*> path = AStar(start, goal);

    // Print the path
    if (!path.empty()) {
        for (Node* node : path) {
            cout << "(" << node->x << ", " << node->y << ") ";
        }
        cout << endl;
    } else {
        cout << "No path found!" << endl;
    }

    // Clean up memory
    delete start;
    delete goal;
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
