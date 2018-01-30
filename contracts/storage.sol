pragma solidity ^0.4.10;


contract Storage {
    uint256 storeData;

    function set(uint256 data) public {
        storeData = data; 
    }

    function get() public constant returns (uint256) {
        return storeData;
    }
    
}
