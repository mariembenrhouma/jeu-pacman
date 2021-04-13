# jeu-pacman
L’objectif de ce problème est l’analyse et l’implémentation, en partie, d’une version simplifiée d&#39;un jeu
mettant en opposition un Pacman et plusieurs adversaires. Ce jeu permet à un joueur de déplacer son
Pacman dans un labyrinthe dont les couloirs (lignes ou colonnes) sont remplis de petites pastilles.
Pacman mange ces pastilles une à une et la partie est gagnée quand toutes les pastilles ont été mangées.
Dans le cadre de ce problème, on suppose que le labyrinthe est un ensemble de cases de forme
rectangulaire où chacune peut abriter plus d&#39;un occupant (Pacman ou adversaires). Si deux occupants
de natures différentes (Pacman et adversaire) se placent sur la même case un combat commence et le
plus fort gagne. On suppose aussi que le déplacement d’un occupant se fait sur l’une des quatre cases
voisines à la sienne. Dans le cas où le déplacement fait ressortir l’occupant du labyrinthe, ce dernier
réapparait sur le côté opposé du labyrinthe.
Les adversaires vont poursuivre le Pacman dans le labyrinthe. Les adversaires apparaissent dans une
case &quot;prison&quot; où ils ne font rien, puis sont libérés par la suite, chacun à son tour. Mais, le Pacman peut
se défendre ! Parmi les pastilles, il y a des capsules d&#39;énergie : quand le Pacman en mange une, il peut à
son tour dévorer les adversaires pendant une seconde par pastille. Les adversaires vont alors tenter de
fuir le Pacman, jusqu’à ce que les effets de la capsule d&#39;énergie se dissipent. Quand un adversaire est
mangé par le Pacman, il va être replacé dans la &quot;prison&quot; et en ressortira après 2 secondes. De plus, le
Pacman peut se protéger en passant sur certaines cases spéciales (cases &quot;joker&quot;), qui ne peuvent pas être
visitées par les adversaires.
Le jeu commence par donner au Pacman un nombre de vie égal à 4. Quand le Pacman est rattrapé, il
perd une vie et peut ensuite réapparaître dans le jeu, à son point de départ. Le jeu est perdu quand le
Pacman a perdu toutes ses vies. De plus, pour inciter le joueur à prendre des risques et donc essayer de
se débarrasser des adversaires, un système de score est instauré selon les règles suivantes :
- 1 pastille mangée : 20 points ;
- 1 adversaire battu : 1 000 points ;
- 1 vie ajoutée tous les 10 000 points.
Au début du jeu le score est nul.
Le Pacman est initialement immobile. Le déplacement du Pacman est commandité par le joueur en lui
donnant une direction (haut, bas, gauche, droite).
Les adversaires, quant à eux sont dirigés automatiquement. Le mouvement des adversaires se fait
automatiquement à des fréquences périodiques. Ils se dirigent vers le Pacman pour l’attaquer ou
tenteront de le fuir, selon l’état du Pacman qui peut être soit agressif (peut manger les adversaires) soit
non agressif.
Un adversaire possède aussi un état &quot;cherche&quot; ou &quot;suit&quot; ou &quot;fuit&quot;. Un adversaire passe de l'état cherche à l'état suit tant que le Pacman se trouve dans un même couloir. Dans létat cherche,
l&#39;adversaire se déplace de manière aléatoire à l&#39;intérieur du labyrinthe. Le cas échéant, son déplacement
se fait de manière à rattraper le Pacman. Si le Pacman prend une capsule d’énergie, l&#39;adversaire va au
contraire le fuir.
