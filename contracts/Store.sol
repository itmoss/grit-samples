pragma solidity ^0.4.18;


contract SimpleStorage {
    uint myVariable;

    function SimpleStorage() public {
    }

    function set(uint x) public {
        myVariable = x;
    }

    function get() public constant returns (uint) {
        return myVariable;
    }
}
