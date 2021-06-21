#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

//declarando as fun��es do c�digo 
void cadastrarUsuario();
int mostrarMenu();
void dicaAlimentar();
void dicaTreino();
int verificarIMC();
void informarUsuario();

//Declara��o das variaveis globais
int menu, repetirmenu=1;

//Bloco de dados para armazenar o cadastro do usu�rio
struct ficha_usuario{

	char nome[32];
	int idade;
	float altura, peso;
};

struct ficha_usuario usuario;



// Fun��o na qual usu�rio faz seu cadastro, inserindo dados chaves que ser�o usados na fun��o do c�lculo do IMC. Nessa fun��o ser�o lidos os dados da struct.
void cadastrarUsuario(){

	printf("Por favor, informe o nome pelo qual gostaria de ser identificado(a):\n");
	fgets(usuario.nome,32,stdin); 

	printf("Informe sua idade:\n");
	printf("Aten��o: utilize apenas n�meros.\n");
	scanf("%d", &usuario.idade);

	printf("Informe seu peso em kilos e gramas:\n");
	printf("Exemplo: 70 ou 58,7\n");
	scanf("%f", &usuario.peso);

	printf("Informe sua altura em metros:\n");
	printf("Exemplo: 1,75\n");
	scanf("%f", &usuario.altura);
	system("CLS");
		mostrarMenu(); //chamando a fun��o de menu
}


// Fun��o de menu, a qual dar� ao usu�rio a op��o de acessar todas as funcionalidades do software. 
int mostrarMenu(){ 
	
	int option;
	while (option < 1 || option > 5){
 		 system("CLS");
		printf("Ol�, %s", usuario.nome);
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("\tEsse � o nosso menu! Selecione uma das op��es a seguir de acordo com o que deseja fazer:\n");
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("-1. Ver dicas de alimenta��o.            -=\n");
		printf("-2. Ver dicas de exerc�cios.             -=\n"); 
		printf("-3. Atualizar cadastro.                  -=\n");
		printf("-4. Verificar IMC.                       -=\n");
		printf("-5. Not�cias sobre sa�de e bem-estar.    -=\n");
		printf("= -- =- = - =- =- = - = -= - =- = - == -=-=\n");
	    scanf("%d", &menu);
	    
		switch (menu){
	
	         case 1:
	            dicaAlimentar();
	            break;
	
			 case 2:
			 	dicaTreino();
			 	break;
	
			 case 3:
			 	cadastrarUsuario();
				break;
	
			 case 4:
			 	verificarIMC();
				break;
				 
			 case 5:
			 	informarUsuario();
				break;	 
	
			
}
}
        return 0;
}

// Primeira fun��o acessada pelo menu, aqui o usu�rio poder� ver dicas alimentares de acordo com as doen�as restritivas que possui.
void dicaAlimentar(){
	int option ;
	while (option < 1 || option > 6){ // repeti��o caso o usu�rio digite um valor incorreto
		system("CLS");
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("\tEscolha o tipo de doen�a que voc� possui, e baseada nela, iremos apresentar as dicas alimentares que se encaixam nas suas restri��es. \n");
		printf(" -- =- = - =- =- = - = -= =  -=  -= -= - = -= - =  -= -= - = -= - =  -=  - = -= - =  -= -= - = --= - = ");
		printf("\n-1. Diabetes.              -=");
		printf("\n-2. Doen�a cel�aca.        -=");
 		printf("\n-3. Intoler�ncia � lactose.-=");
		printf("\n-4. Hipertens�o.           -=");
		printf("\n-5. Dislipidemia.          -=");
		printf("\n-6. Voltar ao menu.        -=");
		printf("\n-- =- = - =- =- = - = -= -=-=\n");
		scanf("%d", &option);

		switch (option){ 

			case 1:
				
				printf("\tDiabetes:\n \n ");
				Sleep(1000);
				printf("A parte mais importante de uma dieta de redu��o de peso para um diab�tico � a redu��o de a��car e carboidratos(ex:arroz, milho, trigo, batata�). Invista mais comendo verduras (br�colis, chuchu, abobrinha, couve flor, cenoura�) e prote�nas (carnes magras sem nada de gordura).\n");
				Sleep(1000);
				printf("Reduzindo o carboidrato ent�o seu n�vel de insulina tamb�m ir� reduzir e far� com que voc� elimine excesso de s�dio e �gua o que vai resultar em perca de peso.\n");
				Sleep(1000);
				printf("Para quem tem diabetes e deseja ganhar massa, mas de forma magra e saud�vel deve se alimentar com uma quantidade boa em carboidratos (arroz, macarr�o, batata�) mas integrais, consumir verduras (br�colis, chuchu, abobrinha, couve flor, cenoura�) � vontade e prote�nas (carnes magras). Mas � melhor consultar um profissional nutricionista para passar uma dieta correta em quantidades adequadas para seu corpo.\n");
	            Sleep(1000);
	
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
				if (repetirmenu == 1){
				   system("CLS");
				   return dicaAlimentar();}
				else
					exit(0);
			break;
	
	
			case 2:
	
				printf("\tDoen�a cel�aca:\n \n ");
				printf("\tA dieta para doen�a cel�aca deve ser totalmente sem gl�ten, que � uma prote�na presente nos gr�os de trigo, cevada, centeio e espelta. Ao entrar em contato com o intestino do cel�aco, o gl�ten provoca inflama��o e degrada��o das c�lulas intestinais, causando complica��es como diarreias e m� absor��o de nutrientes.\n\n");
				Sleep(1000);
	
				printf("Os alimentos que devem ser evitados na doen�a s�o todos aqueles que possuem gl�ten ou que podem estar contaminados com o gl�ten, como mostrado a seguir:\n\n");
				Sleep(1000);
	
				printf("Farinha de trigo; Cevada; Centeio; Malte; Espelta; S�mola; Massas e doces (p�es bolos, salgados, sobremesas com farinha de trigo, biscoitos, pizza, macarr�o, pastel, lasanha); Bebidas alco�licas (cerveja, whisky, vodka, gin, ginger-ale); Outras bebidas (ovomaltine, bebidas contendo malte, caf�s misturados com cevada, achocolatados); massas para mingau que contenham farinha.\n\n");
				Sleep(1000);
	
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
				
				
	 			if (repetirmenu == 1){
				   system("CLS");
				   return dicaAlimentar();}
				else
					exit(0);
			break;
	
			case 3:
	
				printf("\tIntoler�ncia � lactose:\n \n ");
				printf("A dieta para a intoler�ncia � lactose baseia-se na diminui��o do consumo ou exclus�o dos alimentos que cont�m lactose, como leite e seus derivados. A intoler�ncia � lactose varia de uma pessoa para outra, por isso nem sempre � necess�rio restringir por completo esses alimentos.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos permitidos para quem tem intoler�ncia � lactose s�o:\n\nFrutas; legumes; verduras; carne de boi; frango; porco; peru; peixe; entre outras carnes (se optar por pacotes de carne temperada, � importante verificar os ingredientes utilizados para dar sabor ao alimento); ketchup; mostarda; maionese; azeite; vinagre; �leo; ervas; �gua; sucos; refrigerantes; vinho; champagne e alguns tipos de cerveja. \n\n");
				Sleep(1000);
	
				printf("Vale ressaltar que j� existem alguns alimentos especialmente feitos para quem tem essa restri��o � lactose, ent�o � correto sempre verificar. \n\n");
				Sleep(1000);
	
				printf("\tOs alimentos n�o permitidos para quem tem intoler�ncia � lactose s�o:\n\nAlimentos industrializados; embutidos e processados (salsicha, nuggets, frios e comidas congeladas); leite de origem animal e todos os seus derivados.\n\n");
				Sleep(1000);
	
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
	   			scanf ("%d", &repetirmenu);
	   			
	 			if (repetirmenu == 1){
				   system("CLS");
				   return dicaAlimentar();}
				else
					exit(0);
				break;
	
			case 4:
	
	
	            printf("\tHipertens�o:\n \n ");
				printf("Na dieta para hipertens�o � importante evitar adicionar sal durante o preparo das refei��es e evitar o consumo de alimentos industrializados ricos em s�dio, que � a subst�ncia respons�vel pelo aumento da press�o arterial. Al�m disso, deve-se evitar o consumo de caf�, ch� verde e alimentos ricos em gordura, como carnes vermelhas, lingui�a, salame e bacon.\n\n");
				Sleep(1000);
	
				printf("\tPara controlar a hipertens�o deve-se:\n\nFazer uma alimenta��o rica em frutas, legumes e alimentos integrais, como sementes, arroz, p�o, farinha e macarr�o integrais, e gr�os como aveia, gr�o-de-bico e feij�o.\n\n");
				Sleep(1000);
	
				printf("Tamb�m � importante consumir alimentos com pouca gordura, preferindo leite e derivados desnatados e peixes e carnes magras. Al�m disso, deve-se investir em gorduras boas, utilizando o azeite para preparar os alimentos e consumindo diariamente frutas e sementes ricas em �mega-3, como linha�a, chia, castanha, nozes, amendoim e abacate.\n\n");
				Sleep(1000);
	
				printf("Al�m do sal, tamb�m � importante evitar o consumo de alimentos industrializados ricos em sal, como amaciantes de carne, caldos de carne ou de legumes, molho de soja, molho ingl�s, sopas em p�, macarr�o instant�neo e carnes processadas, como lingui�a, salsicha, bacon e salame, alimentos ricos cafe�na, como caf� e ch� verde, bebidas alco�licas e alimentos ricos em gordura, como carnes vermelhas, frituras, pizzas, lasanha congelada e queijos amarelos, como cheddar e o prato, pois o excesso de gordura favorece o aumento de peso e o aparecimento de aterosclerose, que pioram a hipertens�o.\n\n");
				Sleep(1000);
	
	            printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
	 			if (repetirmenu == 1){
				   system("CLS");
				   return dicaAlimentar();}
				else
					exit(0);
				break;
	
			case 5:

	            printf("\tDislipidemia:\n \n ");
				printf("A dieta para a dislipidemia � bastante focada na redu��o de gorduras, tendo como principal objetivo reduzir a chance do desenvolvimento de graves problemas como entupimento de art�rias, reduzindo os riscos de infartos e derrames.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos indicados para quem sofre algum tipo de dislipidemia s�o:\n\nLeite e iogurte desnatados; queijos magros (minas frescal, ricota, cottage); carnes magras (cox�o duro, cox�o mole, alcatra, patinho, peito de frango sem pele); peixes somente 2x na semana (atum, salm�o, truta, sardinha); �leo de oliva (azeite); �leos vegetais (milho, girassol, canola); margarina em pequena quantidade; prepara��es cozidas, grelhadas, ensopadas ou assadas; p�es e biscoitos integrais (verificar nos r�tulos se est�o isentos de gordura hidrogenada/trans); sucos naturais; ch�s de ervas; �gua de coco.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos que devem ser evitados s�o:\n\nLeite e iogurte integrais; queijos gordurosos (parmes�o, prato, mussarela, camembert, cheddar); carnes gordas (cupim, costela, picanha, pele de frango); v�sceras (f�gado e cora��o); crust�ceos e frutos do mar (camar�o e lagosta); embutidos (lingui�a, salsicha, salame, bacon, toucinho); frios (salame, presunto); manteiga; �leo de dend�; creme de leite; frituras; alimentos ricos em gordura trans (sorvetes, biscoitos recheados, salgadinhos de pacote); bebidas alco�licas.\n\n");
				Sleep(1000);
	
	            printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	 			if (repetirmenu == 1){
				   system("CLS");
				   return dicaAlimentar();}
				else
					exit(0);
				break;
			case 6:
			    
				mostrarMenu();
				break;



}



}

}

// Segunda fun��o chamada via menu, a qual dar� ao usu�rio a possibilidade de receber dicas de exerc�cios f�sicos de acordo com os objetivos listados abaixo.   
void dicaTreino(){
	int option;
	while (option < 1 || option > 4){
		system("CLS");
		printf("-=- =-=-=- =- =- = - =- =- = - = -= - =   -= -\n");
		printf("\tEscolha os tipos de exerc�cios desejados\n");
		printf("-=- =-=-=- =- =- = - =- =- = - = -= - =  = -=  -= -");
		printf("\n-1. Exerc�cios para perder gordura.            -= -"); 
		printf("\n-2. Exerc�cios para ganhar massa.              -= -");
		printf("\n-3. Exerc�cios b�sicos contra sedentarismo.    -= -");
		printf("\n-4. Voltar ao menu.                            -= - \n");
		printf(" -=-=- = - =- = =- = - =- =- = - = -= = -= - = -= -\n");
		scanf("%d", &option);

		switch (option){

			case 1:
				
				printf("\tCorrida:\n \n");
				printf("Um dos exerc�cios mais conhecidos tamb�m est� entre os que podem ajudar a eliminar gordura rapidamente.\nCorrer em um ritmo est�vel e moderado manda as calorias e a gordura embora.\n");
				printf("Pode-se queimar 100 calorias a cada quil�metro corrido, o que � um belo �ndice.\nIsso sem contar a perda de peso e a melhora da capacidade aer�bica.\n");
				printf("Uma boa sugest�o para n�o desistir do objetivo de queimar gordura � procurar mais pessoas para se exercitarem junto.\nAssim, um motiva o outro, e todos se mant�m firmes no mesmo prop�sito.\n \n");
				Sleep(1000);
	
				printf("\tSubir escadas\n \nComo n�o poderia ser diferente, os conselhos dos m�dicos est�o certos: \nsubir escadas � �timo para o condicionamento f�sico e para eliminar gordura. \nA musculatura dos membros inferiores tamb�m � trabalhada gra�as ao levantamento constante das pernas. \nPodem ser queimadas de 500 a 600 calorias por hora ao subir escadas, �ndice similar ao das corridas. \nMas aqui estamos falando de um exerc�cio que utiliza mais m�sculos e, consequentemente, resulta em uma melhor silhueta.\nO simulador de escada pode ser usado como alternativa. \nBasta utiliz�-lo por 30 segundos e, ent�o, investir em um ou dois minutos de exerc�cios de recupera��o ativa, como caminhar ou usar a bicicleta ergom�trica. \n� preciso repetir de dez a 15 sess�es para potencializar o ato de queimar gordura.\n\n");
				Sleep(1000);
	
				printf("\tPular corda\n \nEssa atividade � bastante poderosa para o emagrecimento. \nPara come�ar, � preciso masterizar o ato de pular corda rapidamente, em sess�es de aproximadamente dois minutos. \nOs bra�os devem ficar quase parados ao lado do corpo, enquanto os pulsos s�o rotacionados para fazer a corda girar. \nOs pulos devem ser baixos, suficientes apenas para conseguir passar pela corda. \nJ� a aterrissagem precisa ser suave para n�o prejudicar as articula��es do corpo, em um processo que pode levar alguns dias ou semanas.\n\n");
				Sleep(1000);
				printf("\tAvan�o (ou passada)\n \n O exerc�cio conhecido como avan�o ou passada consiste em estar em p�, levar um dos p�s � frente at� ser poss�vel fazer uma flex�o de aproximadamente 90�, descer at� o ch�o e voltar para a posi��o inicial.\nPode parecer bem simples, mas essa � uma �tima forma de queimar gordura e, de quebra, melhorar a musculatura do quadr�ceps. \nPara come�ar, o ideal � fazer o exerc�cio apenas com o peso do corpo at� se acostumar com sua realiza��o. \nQuem tem bastante pr�tica pode utilizar halteres nas m�os para aumentar a carga nas pernas e tornar o exerc�cio mais desafiador. \nEstima-se que uma hora dessa atividade queime 550 calorias.\n\n");
				Sleep(1000);
	
	
				printf("\tAndar de Bicicleta \n \nMuitas pessoas recorrem a essa alternativa para queimar gordura pelo fato de ser praticada sentada, o que ajuda a descansar as costas e o corpo mesmo enquanto ele ainda se mant�m em movimento. \nPedalar com bastante intensidade durante uma hora pode queimar at� 1.150 calorias.\nTreinos mais moderados tamb�m s�o eficientes, j� que s�o capazes de eliminar 675 calorias em uma hora.\n\n");
				
				
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
	 			if (repetirmenu == 1){
					system("CLS");
					return dicaTreino();}
				else
					exit(0);
				break;
	
			case 2:
				
				printf("\tFlex�o tradicional e de bra�os abertos\n\nExistem v�rios tipos de flex�es, o ideal � come�ar pela mais b�sica delas e depois decidir se vai para as demais. \nNa flex�o tradicional, deixe os bra�os um pouco separados, tendo a largura do ombro como medida assim, realize um movimento de flex�o e extens�o dos cotovelos para baixo. \nEssa � a vers�o mais b�sica da flex�o. \nA flex�o de bra�os abertos � bem parecida com a tradicional, a diferen�a � que a amplitude de abertura dos bra�os � muito maior. \nCom esse exerc�cio, voc� consegue isolar mais o trabalho peitoral e depender menos do tr�ceps. \nO ideal � fazer esses exerc�cios por 60 segundos e estabelecer um intervalo de 30 segundos para mais uma s�rie, caso sua resist�ncia permita.\n\n");
				Sleep(1000);
	
				printf("\tAgachamento tradicional e est�tico \n\nO necess�rio para um agachamento tradicional correto � manter a coluna alinhada. \nDessa forma, voc� n�o sentir� problemas posteriormente. \nComece o agachamento tradicional abaixando-se relativamente pr�ximo do ch�o, com os bra�os e m�os esticados para frente. \nVolte e repita o movimento por cerca de 30 segundos. \nNo agachamento est�tico, em vez de subir e descer, mantenha a posi��o embaixo com os joelhos em rela��o ao ch�o. \nN�o se esque�a de manter as costas retas. \nMantenha essa posi��o e depois alterne para aliviar a dor. \nEsse movimento ajuda a fortalecer o tronco e as pernas. \nComo iniciante, o ideal � fazer 8 repeti��es desses exerc�cios a depender do desempenho.\n\n");
				Sleep(1000);
	
				printf("\tTr�ceps com cadeira \n\nEsse � o �nico exerc�cio que necessita de um auxiliar para ser executado. \nPara inici�-lo, coloque uma cadeira ou mesa pr�xima de voc�, depois com as palmas da m�o crie apoio nela com as costas pr�ximas. \nSeus bra�os devem estar flexionando para tr�s em rela��o ao corpo. \nEstique as pernas e flexione o corpo para o ch�o como se estivesse sentando. \nSe o exerc�cio estiver dif�cil, tente aproximar mais os p�s, pois isso ir� diminuir o peso que � necess�rio para levantar o m�sculo. \nEsse exerc�cio fortalece as pernas e tr�ceps. \nFa�a mais ou menos 20 repeti��es desse exerc�cio � dependendo da sua resist�ncia.\n\n");
				Sleep(1000);
	
				printf("\tLunges alternados\n\nPara o exerc�cio de lunges alternados, � necess�rio ficar de p�, com as costas eretas e em seguida dar um passo para frente dobrando a perna, sua coxa deve ficar paralela ao ch�o. \nApoie as m�os no joelho ou pr�ximo dele e fique assim por 30 segundos, depois alterne para a outra perna. \nNo lunges est�tico, coloque o p� direito � frente, e o p� esquerdo atr�s. \nE dobre o joelho direto para baixar o corpo em dire��o ao ch�o. \nFique no movimento por 30 segundos, descanse 15 segundos e depois repita no outro joelho. \nEsse exerc�cio ajuda a fortalecer os joelhos e coluna. \nRecomenda-se fazer 10 repeti��es de cada lado ou menos caso seja iniciante.\n\n");
				
				
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
	 			if (repetirmenu == 1){
					system("CLS");
					return dicaTreino();}
				else
					exit(0);
	
			case 3:
				
				printf("\tBurpees \n\nAgache o corpo, de modo a que os m�sculos abdutores fiquem paralelos ao ch�o e apoiando as palmas das m�os sobre o ch�o. \nDepois, d� um salto com os p�s para tr�s e assim que estes pousarem no ch�o, d� de novo um salto para a frente, \nimpulsionando o corpo at� ficar com a coluna direita e com os bra�os esticados para cima. \nAgache-se novamente para repetir o exerc�cio.\n\n");
				Sleep(1000);
	
				printf("\tFlex�es de bra�o �Homem-aranha� \n\nComece numa posi��o de flex�o tradicional, onde o seu corpo deve formar uma linha reta dos calcanhares � cabe�a. \nBaixe-se em dire��o ao ch�o e traga o joelho esquerdo para o cotovelo esquerdo, mantendo-o afastado do ch�o. \nPressione para cima e volte a colocar a perna na posi��o inicial. \nRepita com a perna direita.\n\n");
				Sleep(1000);
	
				printf("\tPolichinelo\n\nPara iniciar, mantenha-se numa posi��o ereta, com as pernas juntas e as m�os estendidas ao longo do corpo\n Depois, salte do mesmo lugar onde voc� est�, de modo que os bra�os acompanhem o movimento, elevando-os acima da cabe�a onde as palmas devem se encostar uma na outra.\n Logo ap�s, quando as pernas voltam a se encontrar depois de um pequeno salto, os bra�os tamb�m devem voltar � posi��o inicial. O movimento pode ser feito de maneira r�pida, por�m, os bra�os e pernas devem estar sincronizados.\n Lembre-se de estar com os p�s posicionados corretamente e flexionar bem os joelhos durante o exerc�cio.\n\n");
				Sleep(1000);
	
				printf("\tSkater jumps laterais \n\nEm p�, pule para o lado direito. Caia apoiando na perna direita com o joelho esquerdo dobrado � sua frente. \nO bra�o esquerdo deve ficar ao seu lado e o direito levantado, com o cotovelo dobrado a 90 graus. Fa�a do outro lado. Tudo isso � uma repeti��o.\n\n");
				printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
	 			if (repetirmenu == 1){
					system("CLS");
					return dicaTreino();}
				else
					exit(0);
	
			case 4:
			    
				mostrarMenu();
	
				break;



}



}

}

// Quarta fun��o que pode ser acessada via menu, aqui � feito o c�lculo do IMC (�ndice de massa corporal) do usu�rio de acordo com o peso e altura informados na fun��o cadastrarUsuario.
int verificarIMC(){

	float IMC;
	//c�lculo padr�o do IMC de acordo com os dados da struct.
	usuario.altura=(usuario.altura * usuario.altura);
	IMC= usuario.peso/usuario.altura; 

		printf("imc: %.2f\t",IMC);
		if(IMC<18){
			printf("Deficit de peso!\n");
    		printf("Voc� necessita aumentar sua massa muscular.\nConsulte um nutricionista e um Professor de Educa��o fisica!\n");
    	
		}


      	else if(IMC<=25){
			printf("Peso normal!\n");
			printf("Lembre-se sempre de manter a boa forma.\nPratique exercicios regularmente\n");
	}
      	else if (IMC<=30){
        	printf("Sobrepeso\n");
        	printf("Para seu bem-estar, Pratique exercicios fisicos.\nSe necessario, Consulte um nutricionista!\n");
    }

		else if(IMC<=35){

        	printf("Voc� est� com obesidade de Grau 1 !\n");
        	printf("A obesidade grau 1 pode evoluir para casos graves.\nConsulte seu medico e pratique exercicos fisicos!\n");
    }
    
  		else if(IMC<=39){

        	printf("Voc� est� com obesidade Grau 2 !\n");
        	printf("Por favor, Consulte seu m�dico, e um nuticionista!\n");
}
		else if(IMC>=40){

        	printf("Voc� est� com obesidade Morbida!\n");
        	printf("Por favor, Consulte seu m�dico!\n");
}


			printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
			printf("Digite 0 para Encerrar\n");
			printf("Digite 1 para continuar.\n");
			scanf ("%d", &repetirmenu);
			if (repetirmenu == 1){
				system("CLS");
				return mostrarMenu();}
			else
				exit(0);
				

	

	return IMC;
}


// �ltima fun��o chamada via menu, aqui o usu�rio ter� acesso a diversos portais sobre sa�de e bem-estar, focados em alimenta��o e vida saud�vel. Necess�rio conex�o coma internet e ter o Google Chrome instalado.
void informarUsuario(){
    char cmd[128];
    char usearg; //argumento da fun��o
    
	int opt = 0;
	int repetirmenu;
  	 	 
  	 	 while (opt < 1 || opt >5){ //repeti��o caso seja selecionada alguma op��o tida como incorreta.
  	 	 system("CLS");
	 	 printf(" -- =- = - =- =- = - = -= - =  -= -\n");
	     printf("- Escolha o Portal que Deseja  -= -\n");
	     printf("- = - =- = -= -=--= -=--= -=-= -= -\n");
         printf("- 1 - Viva Bem UOL             -= -\n");
	     printf("- 2 - Portal S� Nutri��o       -= -\n");
	     printf("- 3 - G1- Globo                -= -\n");
	     printf("- 4 - Portal Boa Forma         -= -\n");
	     printf("- 5 -Voltar ao Menu principal  -= -\n");
	     printf("- = - =- = -= -=--= -=--= -=-= -= -\n");
	     scanf("%d",&opt);
}
		 switch(opt){
            
            case 1:
            	printf("Abrindo Navegador");
         		Sleep(900);
				printf(".");
				Sleep(900);
				printf(".");
				Sleep(600);
				printf(".\n");
				Sleep(500);
	
				//iniciando o Chrome � partir do CMD e acessando o portal declarado.
                if(usearg) sprintf(cmd,"start chrome %s"); 
                else sprintf(cmd,"start https://www.uol.com.br/vivabem/alimentacao/"); 
                system(cmd);
                
                
                printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
		 		if (repetirmenu == 1){
				system("CLS");
				return informarUsuario();}
				else
					exit(0);
                break;

            
            case 2:
            	printf("Abrindo Navegador");
         		Sleep(900);
				printf(".");
				Sleep(900);
				printf(".");
				Sleep(600);
				printf(".\n");
				Sleep(500);
            	
                if(usearg) sprintf(cmd,"start chrome %s");
                else sprintf(cmd,"start https://www.sonutricao.com.br/");
                system(cmd);
                
                
                printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
			
		 		if (repetirmenu == 1){
				   system("CLS");
				   return informarUsuario();}
				else
					exit(0);
                break;

            
            case 3:
            	printf("Abrindo Navegador");
         		Sleep(900);
				printf(".");
				Sleep(900);
				printf(".");
				Sleep(600);
				printf(".\n");
				Sleep(500);
                if(usearg) sprintf(cmd,"start Chrome %s");
                else sprintf(cmd,"start  https://g1.globo.com/bemestar/alimentacao/");
                system(cmd);
                
                
               	printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
			
		 		if (repetirmenu == 1){
				   system("CLS");
				   return informarUsuario();}
				else
					exit(0);
                break;

                
                
            case 4:
            	printf("Abrindo Navegador");
         		Sleep(900);
				printf(".");
				Sleep(900);
				printf(".");
				Sleep(600);
				printf(".\n");
				Sleep(500);
                if(usearg) sprintf(cmd,"start Chrome %s");
                else sprintf(cmd,"start https://boaforma.abril.com.br/");
                system(cmd);
                printf("Voc� deseja Voltar ou Encerrar o Programa?\n");
			    printf("Digite 0 para Encerrar\n");
			   	printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
			
		 		if (repetirmenu == 1){
				   system("CLS");
				   return informarUsuario();}
				else
					exit(0);
                break;

  
            case 5:
            	
            	mostrarMenu();
            	break;
			
			
			
		
            
		
}

}

//fun��o main, a qual exibe uma tela de inicializa��o do sistema, em seguida chamando a fun��o cadastrarUsuario.
int main () {
	setlocale(LC_ALL,"PORTUGUESE");
	//INICIALIZA��O DO PROGRAMA
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("\t\t Maring� em Movimento\n");
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
	Sleep(500);
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
	Sleep(1000);
	
	
	system("CLS");
	printf(" \n");
  	
  	printf("\n");
  	
  	printf("\n");
  	
  	printf("\n");
  	
  	printf(" \t \t Maring� em Movimento\n");
  	
  	printf("\n");
  	
  	printf("\n");
  	
	printf("\n");
	
	printf("Inicializando");
		Sleep(900);
	printf(".");
		Sleep(900);
	printf(".");
		Sleep(900);
	printf(".");
		Sleep(900);
		system("CLS");
	
	cadastrarUsuario();

	return 0;
}

