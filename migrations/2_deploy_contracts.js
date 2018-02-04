const SimpleStorage = artifacts.require("SimpleStorage");

//This file is the directive that allows us to deploy the SimpleStorage contract to the blockchain
//module.exports = function(deployer){
//    deployer.deploy(SimpleStorage);
//};

module.exports = (deployer) => {
    deployer.deploy(SimpleStorage);
}
