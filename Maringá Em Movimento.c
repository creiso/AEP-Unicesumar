#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

//declarando as funções do código 
void cadastrarUsuario();
int mostrarMenu();
void dicaAlimentar();
void dicaTreino();
int verificarIMC();
void informarUsuario();

//Declaração das variaveis globais
int menu, repetirmenu=1;

//Bloco de dados para armazenar o cadastro do usuário
struct ficha_usuario{

	char nome[32];
	int idade;
	float altura, peso;
};

struct ficha_usuario usuario;



// Função na qual usuário faz seu cadastro, inserindo dados chaves que serão usados na função do cálculo do IMC. Nessa função serão lidos os dados da struct.
void cadastrarUsuario(){

	printf("Por favor, informe o nome pelo qual gostaria de ser identificado(a):\n");
	fgets(usuario.nome,32,stdin); 

	printf("Informe sua idade:\n");
	printf("Atenção: utilize apenas números.\n");
	scanf("%d", &usuario.idade);

	printf("Informe seu peso em kilos e gramas:\n");
	printf("Exemplo: 70 ou 58,7\n");
	scanf("%f", &usuario.peso);

	printf("Informe sua altura em metros:\n");
	printf("Exemplo: 1,75\n");
	scanf("%f", &usuario.altura);
	system("CLS");
		mostrarMenu(); //chamando a função de menu
}


// Função de menu, a qual dará ao usuário a opção de acessar todas as funcionalidades do software. 
int mostrarMenu(){ 
	
	int option;
	while (option < 1 || option > 5){
 		 system("CLS");
		printf("Olá, %s", usuario.nome);
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("\tEsse é o nosso menu! Selecione uma das opções a seguir de acordo com o que deseja fazer:\n");
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("-1. Ver dicas de alimentação.            -=\n");
		printf("-2. Ver dicas de exercícios.             -=\n"); 
		printf("-3. Atualizar cadastro.                  -=\n");
		printf("-4. Verificar IMC.                       -=\n");
		printf("-5. Notícias sobre saúde e bem-estar.    -=\n");
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

// Primeira função acessada pelo menu, aqui o usuário poderá ver dicas alimentares de acordo com as doenças restritivas que possui.
void dicaAlimentar(){
	int option ;
	while (option < 1 || option > 6){ // repetição caso o usuário digite um valor incorreto
		system("CLS");
		printf(" -- =- = - =- =- = - = -= - =  -= -= - = -= - =  -= -= - = -=-= - =  -= -= - = -= - =  -= -= - = - = \n");
		printf("\tEscolha o tipo de doença que você possui, e baseada nela, iremos apresentar as dicas alimentares que se encaixam nas suas restrições. \n");
		printf(" -- =- = - =- =- = - = -= =  -=  -= -= - = -= - =  -= -= - = -= - =  -=  - = -= - =  -= -= - = --= - = ");
		printf("\n-1. Diabetes.              -=");
		printf("\n-2. Doença celíaca.        -=");
 		printf("\n-3. Intolerância à lactose.-=");
		printf("\n-4. Hipertensão.           -=");
		printf("\n-5. Dislipidemia.          -=");
		printf("\n-6. Voltar ao menu.        -=");
		printf("\n-- =- = - =- =- = - = -= -=-=\n");
		scanf("%d", &option);

		switch (option){ 

			case 1:
				
				printf("\tDiabetes:\n \n ");
				Sleep(1000);
				printf("A parte mais importante de uma dieta de redução de peso para um diabético é a redução de açúcar e carboidratos(ex:arroz, milho, trigo, batata…). Invista mais comendo verduras (brócolis, chuchu, abobrinha, couve flor, cenoura…) e proteínas (carnes magras sem nada de gordura).\n");
				Sleep(1000);
				printf("Reduzindo o carboidrato então seu nível de insulina também irá reduzir e fará com que você elimine excesso de sódio e água o que vai resultar em perca de peso.\n");
				Sleep(1000);
				printf("Para quem tem diabetes e deseja ganhar massa, mas de forma magra e saudável deve se alimentar com uma quantidade boa em carboidratos (arroz, macarrão, batata…) mas integrais, consumir verduras (brócolis, chuchu, abobrinha, couve flor, cenoura…) á vontade e proteínas (carnes magras). Mas é melhor consultar um profissional nutricionista para passar uma dieta correta em quantidades adequadas para seu corpo.\n");
	            Sleep(1000);
	
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
	
				printf("\tDoença celíaca:\n \n ");
				printf("\tA dieta para doença celíaca deve ser totalmente sem glúten, que é uma proteína presente nos grãos de trigo, cevada, centeio e espelta. Ao entrar em contato com o intestino do celíaco, o glúten provoca inflamação e degradação das células intestinais, causando complicações como diarreias e má absorção de nutrientes.\n\n");
				Sleep(1000);
	
				printf("Os alimentos que devem ser evitados na doença são todos aqueles que possuem glúten ou que podem estar contaminados com o glúten, como mostrado a seguir:\n\n");
				Sleep(1000);
	
				printf("Farinha de trigo; Cevada; Centeio; Malte; Espelta; Sêmola; Massas e doces (pães bolos, salgados, sobremesas com farinha de trigo, biscoitos, pizza, macarrão, pastel, lasanha); Bebidas alcoólicas (cerveja, whisky, vodka, gin, ginger-ale); Outras bebidas (ovomaltine, bebidas contendo malte, cafés misturados com cevada, achocolatados); massas para mingau que contenham farinha.\n\n");
				Sleep(1000);
	
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
	
				printf("\tIntolerância à lactose:\n \n ");
				printf("A dieta para a intolerância à lactose baseia-se na diminuição do consumo ou exclusão dos alimentos que contêm lactose, como leite e seus derivados. A intolerância à lactose varia de uma pessoa para outra, por isso nem sempre é necessário restringir por completo esses alimentos.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos permitidos para quem tem intolerância à lactose são:\n\nFrutas; legumes; verduras; carne de boi; frango; porco; peru; peixe; entre outras carnes (se optar por pacotes de carne temperada, é importante verificar os ingredientes utilizados para dar sabor ao alimento); ketchup; mostarda; maionese; azeite; vinagre; óleo; ervas; água; sucos; refrigerantes; vinho; champagne e alguns tipos de cerveja. \n\n");
				Sleep(1000);
	
				printf("Vale ressaltar que já existem alguns alimentos especialmente feitos para quem tem essa restrição à lactose, então é correto sempre verificar. \n\n");
				Sleep(1000);
	
				printf("\tOs alimentos não permitidos para quem tem intolerância à lactose são:\n\nAlimentos industrializados; embutidos e processados (salsicha, nuggets, frios e comidas congeladas); leite de origem animal e todos os seus derivados.\n\n");
				Sleep(1000);
	
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
	
	
	            printf("\tHipertensão:\n \n ");
				printf("Na dieta para hipertensão é importante evitar adicionar sal durante o preparo das refeições e evitar o consumo de alimentos industrializados ricos em sódio, que é a substância responsável pelo aumento da pressão arterial. Além disso, deve-se evitar o consumo de café, chá verde e alimentos ricos em gordura, como carnes vermelhas, linguiça, salame e bacon.\n\n");
				Sleep(1000);
	
				printf("\tPara controlar a hipertensão deve-se:\n\nFazer uma alimentação rica em frutas, legumes e alimentos integrais, como sementes, arroz, pão, farinha e macarrão integrais, e grãos como aveia, grão-de-bico e feijão.\n\n");
				Sleep(1000);
	
				printf("Também é importante consumir alimentos com pouca gordura, preferindo leite e derivados desnatados e peixes e carnes magras. Além disso, deve-se investir em gorduras boas, utilizando o azeite para preparar os alimentos e consumindo diariamente frutas e sementes ricas em ômega-3, como linhaça, chia, castanha, nozes, amendoim e abacate.\n\n");
				Sleep(1000);
	
				printf("Além do sal, também é importante evitar o consumo de alimentos industrializados ricos em sal, como amaciantes de carne, caldos de carne ou de legumes, molho de soja, molho inglês, sopas em pó, macarrão instantâneo e carnes processadas, como linguiça, salsicha, bacon e salame, alimentos ricos cafeína, como café e chá verde, bebidas alcoólicas e alimentos ricos em gordura, como carnes vermelhas, frituras, pizzas, lasanha congelada e queijos amarelos, como cheddar e o prato, pois o excesso de gordura favorece o aumento de peso e o aparecimento de aterosclerose, que pioram a hipertensão.\n\n");
				Sleep(1000);
	
	            printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
				printf("A dieta para a dislipidemia é bastante focada na redução de gorduras, tendo como principal objetivo reduzir a chance do desenvolvimento de graves problemas como entupimento de artérias, reduzindo os riscos de infartos e derrames.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos indicados para quem sofre algum tipo de dislipidemia são:\n\nLeite e iogurte desnatados; queijos magros (minas frescal, ricota, cottage); carnes magras (coxão duro, coxão mole, alcatra, patinho, peito de frango sem pele); peixes somente 2x na semana (atum, salmão, truta, sardinha); óleo de oliva (azeite); óleos vegetais (milho, girassol, canola); margarina em pequena quantidade; preparações cozidas, grelhadas, ensopadas ou assadas; pães e biscoitos integrais (verificar nos rótulos se estão isentos de gordura hidrogenada/trans); sucos naturais; chás de ervas; água de coco.\n\n");
				Sleep(1000);
	
				printf("\tOs alimentos que devem ser evitados são:\n\nLeite e iogurte integrais; queijos gordurosos (parmesão, prato, mussarela, camembert, cheddar); carnes gordas (cupim, costela, picanha, pele de frango); vísceras (fígado e coração); crustáceos e frutos do mar (camarão e lagosta); embutidos (linguiça, salsicha, salame, bacon, toucinho); frios (salame, presunto); manteiga; óleo de dendê; creme de leite; frituras; alimentos ricos em gordura trans (sorvetes, biscoitos recheados, salgadinhos de pacote); bebidas alcoólicas.\n\n");
				Sleep(1000);
	
	            printf("Você deseja Voltar ou Encerrar o Programa?\n");
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

// Segunda função chamada via menu, a qual dará ao usuário a possibilidade de receber dicas de exercícios físicos de acordo com os objetivos listados abaixo.   
void dicaTreino(){
	int option;
	while (option < 1 || option > 4){
		system("CLS");
		printf("-=- =-=-=- =- =- = - =- =- = - = -= - =   -= -\n");
		printf("\tEscolha os tipos de exercícios desejados\n");
		printf("-=- =-=-=- =- =- = - =- =- = - = -= - =  = -=  -= -");
		printf("\n-1. Exercícios para perder gordura.            -= -"); 
		printf("\n-2. Exercícios para ganhar massa.              -= -");
		printf("\n-3. Exercícios básicos contra sedentarismo.    -= -");
		printf("\n-4. Voltar ao menu.                            -= - \n");
		printf(" -=-=- = - =- = =- = - =- =- = - = -= = -= - = -= -\n");
		scanf("%d", &option);

		switch (option){

			case 1:
				
				printf("\tCorrida:\n \n");
				printf("Um dos exercícios mais conhecidos também está entre os que podem ajudar a eliminar gordura rapidamente.\nCorrer em um ritmo estável e moderado manda as calorias e a gordura embora.\n");
				printf("Pode-se queimar 100 calorias a cada quilômetro corrido, o que é um belo índice.\nIsso sem contar a perda de peso e a melhora da capacidade aeróbica.\n");
				printf("Uma boa sugestão para não desistir do objetivo de queimar gordura é procurar mais pessoas para se exercitarem junto.\nAssim, um motiva o outro, e todos se mantêm firmes no mesmo propósito.\n \n");
				Sleep(1000);
	
				printf("\tSubir escadas\n \nComo não poderia ser diferente, os conselhos dos médicos estão certos: \nsubir escadas é ótimo para o condicionamento físico e para eliminar gordura. \nA musculatura dos membros inferiores também é trabalhada graças ao levantamento constante das pernas. \nPodem ser queimadas de 500 a 600 calorias por hora ao subir escadas, índice similar ao das corridas. \nMas aqui estamos falando de um exercício que utiliza mais músculos e, consequentemente, resulta em uma melhor silhueta.\nO simulador de escada pode ser usado como alternativa. \nBasta utilizá-lo por 30 segundos e, então, investir em um ou dois minutos de exercícios de recuperação ativa, como caminhar ou usar a bicicleta ergométrica. \nÉ preciso repetir de dez a 15 sessões para potencializar o ato de queimar gordura.\n\n");
				Sleep(1000);
	
				printf("\tPular corda\n \nEssa atividade é bastante poderosa para o emagrecimento. \nPara começar, é preciso masterizar o ato de pular corda rapidamente, em sessões de aproximadamente dois minutos. \nOs braços devem ficar quase parados ao lado do corpo, enquanto os pulsos são rotacionados para fazer a corda girar. \nOs pulos devem ser baixos, suficientes apenas para conseguir passar pela corda. \nJá a aterrissagem precisa ser suave para não prejudicar as articulações do corpo, em um processo que pode levar alguns dias ou semanas.\n\n");
				Sleep(1000);
				printf("\tAvanço (ou passada)\n \n O exercício conhecido como avanço ou passada consiste em estar em pé, levar um dos pés à frente até ser possível fazer uma flexão de aproximadamente 90º, descer até o chão e voltar para a posição inicial.\nPode parecer bem simples, mas essa é uma ótima forma de queimar gordura e, de quebra, melhorar a musculatura do quadríceps. \nPara começar, o ideal é fazer o exercício apenas com o peso do corpo até se acostumar com sua realização. \nQuem tem bastante prática pode utilizar halteres nas mãos para aumentar a carga nas pernas e tornar o exercício mais desafiador. \nEstima-se que uma hora dessa atividade queime 550 calorias.\n\n");
				Sleep(1000);
	
	
				printf("\tAndar de Bicicleta \n \nMuitas pessoas recorrem a essa alternativa para queimar gordura pelo fato de ser praticada sentada, o que ajuda a descansar as costas e o corpo mesmo enquanto ele ainda se mantém em movimento. \nPedalar com bastante intensidade durante uma hora pode queimar até 1.150 calorias.\nTreinos mais moderados também são eficientes, já que são capazes de eliminar 675 calorias em uma hora.\n\n");
				
				
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
				
				printf("\tFlexão tradicional e de braços abertos\n\nExistem vários tipos de flexões, o ideal é começar pela mais básica delas e depois decidir se vai para as demais. \nNa flexão tradicional, deixe os braços um pouco separados, tendo a largura do ombro como medida assim, realize um movimento de flexão e extensão dos cotovelos para baixo. \nEssa é a versão mais básica da flexão. \nA flexão de braços abertos é bem parecida com a tradicional, a diferença é que a amplitude de abertura dos braços é muito maior. \nCom esse exercício, você consegue isolar mais o trabalho peitoral e depender menos do tríceps. \nO ideal é fazer esses exercícios por 60 segundos e estabelecer um intervalo de 30 segundos para mais uma série, caso sua resistência permita.\n\n");
				Sleep(1000);
	
				printf("\tAgachamento tradicional e estático \n\nO necessário para um agachamento tradicional correto é manter a coluna alinhada. \nDessa forma, você não sentirá problemas posteriormente. \nComece o agachamento tradicional abaixando-se relativamente próximo do chão, com os braços e mãos esticados para frente. \nVolte e repita o movimento por cerca de 30 segundos. \nNo agachamento estático, em vez de subir e descer, mantenha a posição embaixo com os joelhos em relação ao chão. \nNão se esqueça de manter as costas retas. \nMantenha essa posição e depois alterne para aliviar a dor. \nEsse movimento ajuda a fortalecer o tronco e as pernas. \nComo iniciante, o ideal é fazer 8 repetições desses exercícios a depender do desempenho.\n\n");
				Sleep(1000);
	
				printf("\tTríceps com cadeira \n\nEsse é o único exercício que necessita de um auxiliar para ser executado. \nPara iniciá-lo, coloque uma cadeira ou mesa próxima de você, depois com as palmas da mão crie apoio nela com as costas próximas. \nSeus braços devem estar flexionando para trás em relação ao corpo. \nEstique as pernas e flexione o corpo para o chão como se estivesse sentando. \nSe o exercício estiver difícil, tente aproximar mais os pés, pois isso irá diminuir o peso que é necessário para levantar o músculo. \nEsse exercício fortalece as pernas e tríceps. \nFaça mais ou menos 20 repetições desse exercício — dependendo da sua resistência.\n\n");
				Sleep(1000);
	
				printf("\tLunges alternados\n\nPara o exercício de lunges alternados, é necessário ficar de pé, com as costas eretas e em seguida dar um passo para frente dobrando a perna, sua coxa deve ficar paralela ao chão. \nApoie as mãos no joelho ou próximo dele e fique assim por 30 segundos, depois alterne para a outra perna. \nNo lunges estático, coloque o pé direito à frente, e o pé esquerdo atrás. \nE dobre o joelho direto para baixar o corpo em direção ao chão. \nFique no movimento por 30 segundos, descanse 15 segundos e depois repita no outro joelho. \nEsse exercício ajuda a fortalecer os joelhos e coluna. \nRecomenda-se fazer 10 repetições de cada lado ou menos caso seja iniciante.\n\n");
				
				
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
				printf("Digite 0 para Encerrar\n");
				printf("Digite 1 para continuar.\n");
				scanf ("%d", &repetirmenu);
	
	 			if (repetirmenu == 1){
					system("CLS");
					return dicaTreino();}
				else
					exit(0);
	
			case 3:
				
				printf("\tBurpees \n\nAgache o corpo, de modo a que os músculos abdutores fiquem paralelos ao chão e apoiando as palmas das mãos sobre o chão. \nDepois, dê um salto com os pés para trás e assim que estes pousarem no chão, dê de novo um salto para a frente, \nimpulsionando o corpo até ficar com a coluna direita e com os braços esticados para cima. \nAgache-se novamente para repetir o exercício.\n\n");
				Sleep(1000);
	
				printf("\tFlexões de braço “Homem-aranha” \n\nComece numa posição de flexão tradicional, onde o seu corpo deve formar uma linha reta dos calcanhares à cabeça. \nBaixe-se em direção ao chão e traga o joelho esquerdo para o cotovelo esquerdo, mantendo-o afastado do chão. \nPressione para cima e volte a colocar a perna na posição inicial. \nRepita com a perna direita.\n\n");
				Sleep(1000);
	
				printf("\tPolichinelo\n\nPara iniciar, mantenha-se numa posição ereta, com as pernas juntas e as mãos estendidas ao longo do corpo\n Depois, salte do mesmo lugar onde você está, de modo que os braços acompanhem o movimento, elevando-os acima da cabeça onde as palmas devem se encostar uma na outra.\n Logo após, quando as pernas voltam a se encontrar depois de um pequeno salto, os braços também devem voltar à posição inicial. O movimento pode ser feito de maneira rápida, porém, os braços e pernas devem estar sincronizados.\n Lembre-se de estar com os pés posicionados corretamente e flexionar bem os joelhos durante o exercício.\n\n");
				Sleep(1000);
	
				printf("\tSkater jumps laterais \n\nEm pé, pule para o lado direito. Caia apoiando na perna direita com o joelho esquerdo dobrado à sua frente. \nO braço esquerdo deve ficar ao seu lado e o direito levantado, com o cotovelo dobrado a 90 graus. Faça do outro lado. Tudo isso é uma repetição.\n\n");
				printf("Você deseja Voltar ou Encerrar o Programa?\n");
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

// Quarta função que pode ser acessada via menu, aqui é feito o cálculo do IMC (índice de massa corporal) do usuário de acordo com o peso e altura informados na função cadastrarUsuario.
int verificarIMC(){

	float IMC;
	//cálculo padrão do IMC de acordo com os dados da struct.
	usuario.altura=(usuario.altura * usuario.altura);
	IMC= usuario.peso/usuario.altura; 

		printf("imc: %.2f\t",IMC);
		if(IMC<18){
			printf("Deficit de peso!\n");
    		printf("Você necessita aumentar sua massa muscular.\nConsulte um nutricionista e um Professor de Educação fisica!\n");
    	
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

        	printf("Você está com obesidade de Grau 1 !\n");
        	printf("A obesidade grau 1 pode evoluir para casos graves.\nConsulte seu medico e pratique exercicos fisicos!\n");
    }
    
  		else if(IMC<=39){

        	printf("Você está com obesidade Grau 2 !\n");
        	printf("Por favor, Consulte seu médico, e um nuticionista!\n");
}
		else if(IMC>=40){

        	printf("Você está com obesidade Morbida!\n");
        	printf("Por favor, Consulte seu médico!\n");
}


			printf("Você deseja Voltar ou Encerrar o Programa?\n");
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


// Última função chamada via menu, aqui o usuário terá acesso a diversos portais sobre saúde e bem-estar, focados em alimentação e vida saudável. Necessário conexão coma internet e ter o Google Chrome instalado.
void informarUsuario(){
    char cmd[128];
    char usearg; //argumento da função
    
	int opt = 0;
	int repetirmenu;
  	 	 
  	 	 while (opt < 1 || opt >5){ //repetição caso seja selecionada alguma opção tida como incorreta.
  	 	 system("CLS");
	 	 printf(" -- =- = - =- =- = - = -= - =  -= -\n");
	     printf("- Escolha o Portal que Deseja  -= -\n");
	     printf("- = - =- = -= -=--= -=--= -=-= -= -\n");
         printf("- 1 - Viva Bem UOL             -= -\n");
	     printf("- 2 - Portal Só Nutrição       -= -\n");
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
	
				//iniciando o Chrome à partir do CMD e acessando o portal declarado.
                if(usearg) sprintf(cmd,"start chrome %s"); 
                else sprintf(cmd,"start https://www.uol.com.br/vivabem/alimentacao/"); 
                system(cmd);
                
                
                printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
                
                
                printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
                
                
               	printf("Você deseja Voltar ou Encerrar o Programa?\n");
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
                printf("Você deseja Voltar ou Encerrar o Programa?\n");
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

//função main, a qual exibe uma tela de inicialização do sistema, em seguida chamando a função cadastrarUsuario.
int main () {
	setlocale(LC_ALL,"PORTUGUESE");
	//INICIALIZAÇÃO DO PROGRAMA
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("-- =- = - =- =- = =- = - =- =- = - = -= -=-- = -= -=-=\n");
  	Sleep(500);
  	printf("\t\t Maringá em Movimento\n");
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
  	
  	printf(" \t \t Maringá em Movimento\n");
  	
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

