#include <iostream>
using std::string;

/*  C++ OOP with setters and getters */

class Token {
private:
    string Ticker;
    string Chain;
    double TVL;
    string HashingAlgorithm;
    double Price;

public:
    Token(string ticker, string chain, double tvl, string hashingalgorithm, double price) {
        Ticker = ticker;
        Chain = chain;
        TVL = tvl;
        HashingAlgorithm = hashingalgorithm;
        Price = price;
    }

    void setTicker(string ticker) {
        Ticker = ticker;
    }
    string getTicker() {
        return Ticker;
    }

    void setChain(string chain) {
        Chain = chain;
    }
    string getChain() {
        return Chain;
    }

    void setTVL(double tvl) {
        TVL = tvl;
    }
    double getTVL() {
        return TVL;
    }

    void setHashingAlgorithm(string hashingalgorithm) {
        HashingAlgorithm = hashingalgorithm;
    }
    string getHashingAlgorithm() {
        return HashingAlgorithm;
    }

    void setPrice(double price) {
        Price = price;
    }
    double getPrice() {
        return Price;
    }

    void delist() {
        string name = Ticker + " (VOID)";
        setTicker(name);
        setPrice(0.00);
        setTVL(0.00);
    }
};


int main()
{
    Token ethereum = Token("ETH", "Ethereum", 68400000000, "Keccak-256", 1765.42);
    ethereum.delist();
    std::cout << "Profile" << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << "Ticker: " << ethereum.getTicker() << std::endl;
    std::cout << "Chain: " << ethereum.getChain() << std::endl;
    std::cout << "TVL: $" << ethereum.getTVL() << std::endl;
    std::cout << "Hashing Algorithm: " << ethereum.getHashingAlgorithm() << std::endl;
    std::cout << "Current Price: $" << ethereum.getPrice() << std::endl;
}
