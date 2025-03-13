# MultiplayerPlugin-UnrealEngine 5.4
 Plugin for handling online multiplayer sessions in UE 5.4 --- Made by following Stephen Ulibarri's course : "Create a fast-paced, competitive multiplayer shooter in Unreal Engine 5 using C++!" 

## Setup
1. Clone the repository
2. Open the file folder at the root of your project
3. If it does not exist, create a new folder called `Plugins`
4. Copy the `MultiplayerSession` folder into the `Plugins` folder
5. Right-click on the .uproject file and select `Generate Visual Studio project files`
6. You're good to go!

## Usage
 
![MainMenu LevelBlueprint.png](MainMenu LevelBlueprint.png)
 - TypeOfMatch will be the type of match you want to create, it can be a `QuickMatch`, `CustomMatch`, `FreeForAll`, ...
 - LobbyPath is the path to the level you want to load after creating the session. 
 - You can get it by right-clicking on it, then `Copy File Path` and replace the path up to `/Content/` with `/Game/` and removing the `.umap` extension.
_**Exemple :** for the ThirdPersonMap it is `/Game/ThirdPerson/Maps/ThirdPersonMap`_