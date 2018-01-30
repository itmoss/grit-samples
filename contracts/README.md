##Put it in a json format

solc --optimize --combined-json abi,bin,interface Storage.sol > storage.js

Revise as like belows :

var storageOutput={"contracts":{"Storage.sol:Storage":{"abi":"[{\"constant\":false,\"inputs\":[{\"name\":\"data\",\"type\":\"uint256\"}],\"name\":\"set\",\"outputs\":[],\"payable\":false,\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"constant\":true,\"inputs\":[],\"name\":\"get\",\"outputs\":[{\"name\":\"\",\"type\":\"uint256\"}],\"payable\":false,\"stateMutability\":\"view\",\"type\":\"function\"}]","bin":"6060604052341561000f57600080fd5b60bb8061001d6000396000f30060606040526004361060485763ffffffff7c010000000000000000000000000000000000000000000000000000000060003504166360fe47b18114604d5780636d4ce63c146062575b600080fd5b3415605757600080fd5b60606004356084565b005b3415606c57600080fd5b60726089565b60405190815260200160405180910390f35b600055565b600054905600a165627a7a7230582090d74f8147cd990e79c2cc5283d9cc25ab7a399b6cbda80ed0c2a08c2f3877ac0029"}},"version":"0.4.19+commit.c4cbbb05.Darwin.appleclang"}


