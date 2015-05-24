/*
Coded - by Elton Fonseca

*/
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void main() {
    
  char nome[50];                                                                   //declaração das variaveis.
  char resposta;
  char pulo;
  int contadorperguntaf=1,contadorperguntam=1,contadorperguntad=1;
  int errado_1=0,errado_2=0,errado_3=0;
  int certo_1=0,certo_2=0,certo_3=0,pontostotal=0,nivel,i=0;
  
  
    dificuldade:   
                   
    system("color 9F");  
    printf("\n\n\n\n");   
    printf("\t\tXXXXXX    XXXXXXX  XXXXXXXX   XXXXXXXX      \n");
    printf("\t\tXX    XX  XX       XX     XX  XX     XX     \n");
    printf("\t\tXX    XX  XX       XX     XX  XX     XX     \n");
    printf("\t\tXX    XX  XXXXXXX  XXXXXXXX   XXXXXXXX      \n");
    printf("\t\tXX    XX  XX       XX    XX   XX            \n");
    printf("\t\tXX    XX  XX       XX     XX  XX            \n");
    printf("\t\tXXXXXX    XXXXXXX  XX     XX  XX            \n");
    printf("\n");    
    printf("\t\tXXXXXXX  XX    XX   XXXXX   XXX         XXX    \n"); 
    printf("\t\tXXXXXXX  XX    XX  XX   XX  XXX         XXX    \n");
    printf("\t\tXX       XX    XX  XX   XX  XXX    X    XXX    \n");
    printf("\t\tXXXXXXX  XXXXXXXX  XX   XX  XXX   XXX   XXX    \n");
    printf("\t\t     XX  XX    XX  XX   XX  XXX  XX XX  XXX    \n");
    printf("\t\tXXXXXXX  XX    XX  XX   XX  XXX XX   XX XXX    \n");
    printf("\t\tXXXXXXX  XX    XX   XXXXX    XXXX     XXXX     \n\n");                     //menu dificuldade, usado com o goto
      
                                                              
    printf ("\t*------------------------------------------------------*\n");    
	printf ("\t|                    MENU DE OPCOES                    |\n");
	printf ("\t*------------------------------------------------------*\n");
	printf ("\t|  0 - SAIR DO GAME                                    |\n");
	printf ("\t|  1 - JOGAR TODOS OS NIVEIS - GAME COMPLETO COM MEMES |\n");
	printf ("\t|  2 - JOGAR NIVEL FACIL - SOMENTE O NIVEL FACIL       |\n");       //selecionar o que deseja fazer     
	printf ("\t|  3 - JOGAR NIVEL MEDIO - SOMENTE O NIVEL MEDIO       |\n");
	printf ("\t|  4 - JOGAR NIVEL DIFICIL - SOMENTE O NIVEL DIFICIL   |\n");
	printf ("\t|  5 - VER INSTRUCOES DO JOGO E INFORMACOES            |\n");
	printf ("\t|  6 - VER OS DESENVOLVEDORES                          |\n");
	printf ("\t*------------------------------------------------------*\n");
	printf ("\tO QUE DESEJA FAZER ? ");                                            
	scanf ("%d",&nivel);                                                           //armazena opção em nivel 
	
	if(nivel != 1 && nivel != 2 && nivel != 3 
    && nivel != 4 && nivel != 5 && nivel != 6 && nivel != 0){                      //verifica se opção existe   
             
             goto teste;
                                             //se opção não existir, mostra nivel invalido
                                                                 //limpa a tela
                } 
                        
             
             
             if (nivel == 5){  
             goto intrucoes;          
             }          
             if (nivel == 6){  
             goto desenvolvedores;          
             }  
             
             if ( nivel == 0 ){
             return 0;
             }                       
	
	getchar();
	system("cls");                                                                 //limpa a tela           
                                                     
    printf("\n\n\tDIGITE O NOME DO PARTICIPANTE: ");
    gets(nome);system ("cls"); 
    printf ("\n\tSEJA BEM VINDO \"%s\"\n",nome);
    
    printf("\n\n");
    
    printf ("\tEste e um jogo de perguntas e respostas. O jogador devera escolher,\n");
	printf ("\tdentre as 4 alternativas apenas uma e em seguida pressionar \"enter\"\n\n");
	printf ("\tPara mais informacoes, acesse a opcao intrucoes do menu do jogo.\n\n");
    	
	printf("\n\tPRESSIONE ENTER PARA COMECAR...");
	getchar();system ("cls");                                                      //limpa a tela
	
	// nivel facil
	
	
                 
	switch (nivel)
	{
                     
    case 1 :
		{
        } 
          
	case 2 :
		{
            
	system("cls");                                                                 //limpa a tela
    printf("\n");
	system("color FC");	
    printf("\t      *---------------------------------------------*\n");
	printf("\t      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||            \n");
    printf("\t      || XX X   XX  XX  XX     XX  XX       XX     ||             \n");
    printf("\t      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||             \n");
    printf("\t      || XX   X XX  XX    XX XX    XX       XX     ||             \n");
    printf("\t      || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||             \n"); 
    printf("\t      *---------------------------------------------*\n");
   	printf("\t      || XXXXXXX   XXXXX    XXXXX  XX  XX          ||           \n");
    printf("\t      || XX       XX   XX  XX      XX  XX          ||           \n");
    printf("\t      || XXXXX    XXXXXXX  XX      XX  XX          ||             \n");
    printf("\t      || XX       XX   XX  XX      XX  XX          ||              \n");
    printf("\t      || XX       XX   XX   XXXXX  XX  XXXXXX      ||               \n");
	printf("\t      *---------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                      //limpa a tela
    
    // 1º questão facil    
    
    system("color 1F");
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tO que significa CPU?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Control Panel Unit - Unidade de Painel de Controle\n"); 
	printf ("\t\tB) Central Power Unit - Unidade de Força Central\n");
	printf ("\t\tC) Control Power Unit - Unidade de Controle de Energia\n");
	printf ("\t\tD) Central Processing Unit - Unidade Central de Processamento\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
    }
    
    // 2º questão facil
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuais são as principais fabricantes de \n\t\tprocessadores para Desktops e notebooks ?\n\n");
    printf ("\t\tA) Intel e Dell\n");
	printf ("\t\tB) Dell e AMD\n");
	printf ("\t\tC) Intel e AMD\n");
	printf ("\t\tD) AMD e IBM\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'c'||resposta == 'C')
	{
	printf ("\t\tResposta certa\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	}
	
	// 3º questão facil
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuais são os sintomas mais comuns de\n\t\tsuperaquecimento do processador ?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Apitos agudos da placa-mae\n"); 
	printf ("\t\tB) Reinicios e congelamentos inesperados da maquina\n");
	printf ("\t\tC) Cheiro de queimado que exala de dentro do gabinete\n");
	printf ("\t\tD) Imagem corrompida, com cores trocadas e manchas\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_1++;
    }
    
    // 4º questão facil
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tO que quer dizer bug ?\n\n");
    printf ("\t\tA) E a memoria que facilita as tarefas e liberta o processador.\n");
	printf ("\t\tB) E um tipo de periferico.\n");
	printf ("\t\tC) E um erro de programacao.\n");
	printf ("\t\tD) E uma peca de hardware\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'c'||resposta == 'C')
	{
	printf ("\t\tResposta certa\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	}
    
    // 5º pergunta facil
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                        //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil|\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tO SPAM atualmente em 2012 corresponde a aproximadamente:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 50%% de todos os emails\n");
	printf ("\t\tB) 40%% de todos os bancos de dados mundiais\n");
	printf ("\t\tC) 80%% de todos os provedores de internet\n");
	printf ("\t\tD) 32%% da internet\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;	                                                      
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
	}    
    
    // 6º pergunta facil 

    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t A velocidade dos processadores atuais eh normalmente medida em:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Hertz ou Hz\n"); 
	printf ("\t\tB) Gigahertz ou GHz\n");
	printf ("\t\tC) Quilo byte ou Kb\n");
	printf ("\t\tD) Megabyte ou MB\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
    errado_1++;
    }
    
// 7º pergunta facil   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t O formato padrao dos arquivos gerados pelo Word eh :\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) txt.\n"); 
	printf ("\t\tB) doc.\n");
	printf ("\t\tC) xls.\n");
	printf ("\t\tD) html.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_1++;
    }
    
// 8º pergunta facil  
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t A extensao padrao de arquivos de audio no windows eh:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) WAV.\n"); 
	printf ("\t\tB) BIN.\n");
	printf ("\t\tC) ARC.\n");
	printf ("\t\tD) WMF.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
    }

    
  // 9º pergunta facil   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\tTemos 2 tipos de memoria principal no computador, quais sao?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA)RAM volatil e HD nao volatil\n"); 
	printf ("\t\tB)HD volatil e RAM nao volatil\n");
	printf ("\t\tC)HD e RAM volateis\n");
	printf ("\t\tD)HD e RAM nao volateis\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
    }
    
    // 10º pergunta facil   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\tEh um tipo de computador que tem como funcao\n\t\tcontrolar as demais estacoes de trabalho quando\n\t\tligados em uma rede de computadores:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Estacao de trabalho.\n"); 
	printf ("\t\tB) UMPC\n");
	printf ("\t\tC) Servidor\n");
	printf ("\t\tD) Desktop\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls"); 
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls"); 
    }   
    
    
	if (nivel == 1){
        }
    else{
    goto nivelfacil;
            }
		}    
	
    // nivel medio
    
   
	

	
	case 3:
		{
	system("color FC");           
   	printf("\t      *-------------------------------------------------*\n");
	printf("\t      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||              \n");
    printf("\t      || XX X   XX  XX  XX     XX  XX       XX     ||              \n");
    printf("\t      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||              \n");
    printf("\t      || XX   X XX  XX    XX XX    XX       XX     ||              \n");
    printf("\t      || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||              \n"); 
    printf("\t      *-------------------------------------------------*\n");
   	printf("\t      || XXXX   XXXX  XXXXXX  XXXXXXX    XX   XXXXX   ||           \n");
    printf("\t      || XX XX XX XX  XX      XX    XX   XX  XX   XX  ||           \n");
    printf("\t      || XX  XXX  XX  XXXXX   XX     XX  XX  XX   XX  ||           \n");
    printf("\t      || XX   X   XX  XX      XX    XX   XX  XX   XX  ||           \n");
    printf("\t      || XX       XX  XXXXXX  XXXXXXX    XX   XXXXX   ||           \n");
	printf("\t      *-------------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                      //limpa a tela
    
    // 1º questão medio
    
    system("color 2F");
 	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tO primeiro dominio registrado na internet foi:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) www.datacenter.com\n");
	printf ("\t\tB) www.symbolics.com\n");
	printf ("\t\tC) www.social.com\n");
	printf ("\t\tD) www.us.gov\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_2++;
	}
	
	// 2º questão medio
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQual e o barramento utilizado nas placas de video atuais?:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) AGP\n");
	printf ("\t\tB) PCI\n");
	printf ("\t\tC) PCI Express\n");
	printf ("\t\tD) PCI Express 16x\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	}
	
	// 3º questão medio
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                         //limpa a tela
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuais destas nao e uma linguagem de programacao ?\n\n");
    printf ("\t\tA) Cobol\n");
	printf ("\t\tB) Basic\n");
	printf ("\t\tC) Smalltalk\n");
	printf ("\t\tD) Preview\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'd'||resposta == 'D')
	{
	printf ("\t\tResposta certa\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	}
	
	// 4º questão medio
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQual a forma de memoria mais rapida,\n\t\tpresente nos nossos computadores ?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) A memoria Flash\n"); 
	printf ("\t\tB) A GDDR5\n");
	printf ("\t\tC) A memoria RAM DDR3\n");
	printf ("\t\tD) A memoria Cache\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
    }
	
	// 5º questão medio
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                        //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQual a vida util estimada para um DVD de boa qualidade ?\n\n");
    printf ("\t\tA) Aproximadamente 100 anos\n");
	printf ("\t\tB) É impossivel medir a durabilidade\n");
	printf ("\t\tC) 9 mil horas de leitura\n");
	printf ("\t\tD) 350 mil dias\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'a'||resposta == 'A')
	{
	printf ("\t\tResposta certa\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_2++;
	}
	
	// 6º questão medio    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio |\n",contadorperguntam++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t A unidade central de processamento (UCP) e composta de:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Unidade Central de Processamento e Memória de Massa.\n"); 
	printf ("\t\tB) Dispositivos ou Unidades de Entrada.\n");
	printf ("\t\tC) Unidade Central de Processamento e Memoria Principal.\n");
	printf ("\t\tD) Unidade de Controle e Unidade de Lógica e Aritmetica.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
    }
    
// 7º questão medio    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio |\n",contadorperguntam++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t a unidade de medida da resolucao de uma impressora e dada em:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) CPS.\n"); 
	printf ("\t\tB) BPM.\n");
	printf ("\t\tC) PPM.\n");
	printf ("\t\tD) DPI.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
    }
    
    // 8º questão medio   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio |\n",contadorperguntam++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\t Entre os meios de transmissao abaixo,\n\t\t assinale aquele que nao eh guiado:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) par trançado.\n"); 
	printf ("\t\tB) cabo coaxial.\n");
	printf ("\t\tC) microondas.\n");
	printf ("\t\tD) fibra ótica.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
    }
    
    // 9º questão medio 
    
    
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio|\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tEm modo de espera, quais componentes ficam ligadas ?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Placa mae, processador, monitor\n"); 
	printf ("\t\tB) Placa mae, hd, monitor\n");
	printf ("\t\tC) Placa mae,memoria ram\n");
	printf ("\t\tD) Placa mae, Placa de rede, modem, memoria ram\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
    }
    
  // 10º questão medio   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*---------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio |\n",contadorperguntam++);
	printf ("\t\t*---------------------------------*\n\n");
	printf ("\t\tQual destes sistemas operacionais e usado em trens ?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Windows\n"); 
	printf ("\t\tB) Linux\n");
	printf ("\t\tC) Unix\n");
	printf ("\t\tD) Android\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
}
	

	if (nivel == 1){
     }
     else{
     goto nivelmedio;
     }
     }
			
    // nivel dificil	
     
    
	

		
		case 4 :
		{   
            
    system("color FC");        
   	printf("\t      *---------------------------------------------*\n");
	printf("\t      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||              \n");
    printf("\t      || XX X   XX  XX  XX     XX  XX       XX     ||              \n");
    printf("\t      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||              \n");
    printf("\t      || XX   X XX  XX    XX XX    XX       XX     ||              \n");
    printf("\t     || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||              \n"); 
    printf("\t      *-----------------------------------------------*\n");
   	printf("\t      || XXXXXX    XX  XXXXX  XX   XXXXX  XX  XX     ||            \n");
    printf("\t     || XX    XX  XX  XX     XX  XX      XX  XX     ||            \n");
    printf("\t      || xX    XX  XX  XXXX   XX  XX      XX  XX     ||            \n");
    printf("\t      || xX    XX  XX  XX     XX  XX      XX  XX     ||            \n");
    printf("\t     || XXXXXX    XX  XX     XX   XXXXX  XX  XXXXXX ||            \n");
	printf("\t      *-----------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                       //limpa a tela
    
 	// 1º questão dificil
	
	system("color 47");
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuando foi lançado o primeiro microprocessador ?\n\n");
    printf ("\t\tA) Em 1971, havendo 3 concorrentes\n");
	printf ("\t\tB) Em 1985, pela ARM Foundation\n");
	printf ("\t\tC) Em 1979, pela Motorola\n");
	printf ("\t\tD) Em 1944, durante a Segunda Guerra Mundial\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'a'||resposta == 'A')
	{
	printf ("\t\tResposta certa\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	}
	
	//  2º questão dificil
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuem foi o pai da computacao ?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Allan Moore\n"); 
	printf ("\t\tB) Albert Einstein\n");
	printf ("\t\tC) Thomas Ericsson\n");
	printf ("\t\tD) Alan Turing\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_3++;
	}
	
	// 3º questão dificil
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                        //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tO nome original do primeiro Xbox era:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) DirectBox\n"); 
	printf ("\t\tB) BillBox\n");
	printf ("\t\tC) ZBox\n");
	printf ("\t\tD) MicrosoftBox\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	}
	
	// 4º questão dificil
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                      //limpa a tela
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuais são as principais fabricantes de processadores ARM ?\n\n");
    printf ("\t\tA) Samsung, PowerVR, AMD Tech e Intel\n");
	printf ("\t\tB) Infineon Imaging, Texas Qualcomm e NVIDIA\n");
	printf ("\t\tC) PowerVR, SGX, NVIDIA e Qualcomm Instruments\n");
	printf ("\t\tD) Samsung, Texas Instruments, Qualcomm e NVIDIA\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'd'||resposta == 'D')
	{
	printf ("\t\tResposta certa\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_3++;
	}
 
    // 5º questão dificil
		
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                        //limpa a tela
    printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
    printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\tQual das pastas abaixo nao pode ser criada no Windows ?\n\n");
	printf ("\t\tA) Trojan\n");
	printf ("\t\tB) Sys32\n");
	printf ("\t\tC) Con\n");
	printf ("\t\tD) Sys\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'c'||resposta == 'C')
	{
	printf ("\t\tResposta certa\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_3++;
	}
	
	//  6º questão dificil 
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t*-----------------------------------*\n");
	printf ("\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t*-----------------------------------*\n\n");
	printf ("\tO que eh firmware ?\n\n");
	printf ("\t----------------------------------\n");
	printf ("\tA)Interface basica do sistema operacional do Macintosh.\n"); 
	printf ("\tB)Conjunto de instrucoes para o funcionamento de um dispositivo.\n");
	printf ("\tC)Byte existente no inicio de uma trilha de disco.\n");
	printf ("\tD)Eh um tipo de memoria nao volatil.\n");
	printf ("\t----------------------------------\n");
	printf ("\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\tResposta errada\n");
	printf ("\tResposta correta: Letra \"B\"\n");
	errado_3++;
    }
    
    
    
    	//  7º questão dificil   
    
    printf ("\t----------------------------------\n");
	getchar();printf ("\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\t A tecnica em que parte do programa eh armazenada\n\t\tem disco e levada para a memoria para ser\n\t\texecutada quando necessario eh chamada de:\n");
	printf ("\t\t----------------------------------\n\n");
	printf ("\t\tA) armazenamento virtual\n"); 
	printf ("\t\tB) alocação de memoria\n");
	printf ("\t\tC) priorizacao de memoria\n");
	printf ("\t\tD) alocação de recursos\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
    }
    
    
    
   	//  8º questão dificil  
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\t FSB (Front Size Bus), tambem conhecido como \n\t\tbarramento frontal, realiza a ligacao entre\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) o processador (CPU) e o chipset\n"); 
	printf ("\t\tB) o chipset e a memoria RAM\n");
	printf ("\t\tC) o BIOS e a memória RAM\n");
	printf ("\t\tD) o chipset e a placa-mãe\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
    }
    
    
    
    
    
    
 


	//  9º questão dificil        
       
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\tEm relacao as topologias de redes, eh correto afirmar que:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) topologia em estrela todas as estacoes\n\t\tsao interligadas duas a duas entre si.\n\n"); 
	printf ("\t\tB) rede em anel consiste em estacoes \n\t\tconectadas atraves de um caminho fechado.\n\n");
	printf ("\t\tC) redes por chaveamento de pacotes cada\n\t\t estacao so pode realizar uma unica tarefa.\n\n");
	printf ("\t\tD) topologia em estrela a falha de qualquer \n\t\tdas estacoes causa a parada total do sistema.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_3++;
    }
    

    
  	//  10º questão dificil   
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\t CGA, EGA, VGA e SVGA sao siglas que identificam\n\t\tadaptadores graficos para:\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Videos\n"); 
	printf ("\t\tB) Impressoras\n");
	printf ("\t\tC) Drivers\n");
	printf ("\t\tD) Teclados\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
    }
	

	getchar();printf ("\n\n\t\tQUIZ ENCERRADO\n\t\tCONFIRA OS RESULTADOS \n\t\t...");
	getchar();system("cls");                                                       //limpa a tela
	
	if (nivel == 1){
            goto todosniveis;
            }
            else{
            goto niveldificil;
            }
					
		}
        
    intrucoes:
    
    case 5 :
	{
             
    system("cls");                                                                 //limpa a tela
    printf ("\n\n\t5 - INSTRUCOES\n\n");   
    printf ("\tEste eh um divertido jogo de perguntas e respostas.\n\tO jogador devera escolher,");
	printf (" dentre as 4 alternativas (A, B, C, D),\n\tapenas uma e em seguida pressionar \"enter\".\n\n");
	printf ("\tO jogo lhe informa se vc acertou ou errou a questao.\n\n");
	printf ("\tO jogo possui 3 niveis de dificuldade:\n\n");
	printf ("\tTodos Niveis - Neste modo vc jogara o game completo\n");
	printf ("\tao final vera seus resultados com figuras em caracteres ASCII,\n");
	printf ("\testes são os famosos memes da internet, sao varios que\n");
	printf ("\tsao mostrados de acordo com sua pontuação.\n\n");
	printf ("\tOs niveis podem ser jogados de forma individual sem precisar\n");
	printf ("\tjogar o game completo.\n\n");
	
    printf ("\tSistema de pontuacao do game.\n\n");
	printf ("\tNivel facil   - Cada resposta certa valera 150 pontos\n");
	printf ("\tNivel medio   - Cada resposta certa valera 200 pontos\n");
	printf ("\tNivel dificil - Cada resposta certa valera 250 pontos\n\n");
    printf ("\tBasicamente eh isso, divirta-se.\n");              
    printf ("\t----------------------------------\n\n");
    
    getchar();printf ("\tEnter para retornar ao menu.");
    getchar();system("cls");                                                        //limpa a tela
    goto dificuldade;       
    }  
    
    desenvolvedores: 
        
    case 6 :
         
	{
      
    system("cls");                                                                  //limpa a tela
    printf ("\n\n\n\n\n\tPROGRAMADORES.\n\n");
	printf ("\tELTON FONSECA - CyberBot\n\n");
	
    
	

	
	
	getchar();printf ("\tEnter para retornar ao menu.");
    getchar();system("cls");                                                        //limpa a tela
    goto dificuldade; 	
	             
         }
         
    
		teste:
		default : system("cls");
		system("color f0");
printf ("\t                 .                           \n");    
printf ("\t                 .@rrr. :...                     \n"); 
printf ("\t              7B@2rr;;XM@7XS0S;                \n");   
printf ("\t            ;MMr;i:;0MMZBMMMBSXBr ;r            \n");  
printf ("\t            MM:i;MMMBr;;;;;;8MM:2MMM            \n");  
printf ("\t           @7:i@BXB7Z@2X7r;:.MMMMMMMi             \n");
printf ("\t         .M7i;Mr     iSZ2XX@MiMMMM.MBZ:           \n");
printf ("\t        .Mri;M             rMMr: MM.:rZ2:         \n");
printf ("\t        XM:iM.   .        M   MMMMMM:rrX0BSM      \n");
printf ("\t         2iM. 2:.W2:     S     X7 ;Mirrri;MW      \n");
printf ("\t         XSr X:   :M7.   S:        rZ;r;MM.       \n");
printf ("\t         rM 2MM     rr    7X.     :iM:;;S:        \n");
printf ("\t        0aB rM.    .;      .i;;rrr. SM7;rM        \n");
printf ("\t       ZMi2  :   .;i                 MB;7S        \n");
printf ("\t       r@iB:  i..;.                  Si;7X        \n");
printf ("\t       Xr;SS                        .MirM;        \n");
printf ("\t       MXi;M.                ;:      2iMM         \n");
printf ("\t       :MM:iM.        :      2r      BM.          \n");
printf ("\t        .@M@@M.       20:.  :M.     MiM           \n");
printf ("\t           ..:MM:      :288Z2.     M@rMMr         \n");
printf ("\t              .M.                 MMM.            \n");
printf ("\n\n\t\t\tEU DISSE UMA OPCAO VALIDA\n\n");   
		{
			getchar();printf ("\n\n\t\tPressione \"enter\" para voltar ao menu...");
			getchar(); system ("cls");
			goto dificuldade;
			
			
      }
		
	}/*fechamento do 1º swhith*/
	
	//  pontuação - Resultados	
	
	
 
    
	
	

//
	
    todosniveis:
    pontostotal=(certo_1*150)+(certo_2*200)+(certo_3*250);
    
    system("cls");
	system("color 2F");
	
if (pontostotal<=1250){                               
printf("\t\t                2rLUGBG7uv:                              \n");
printf("\t\t             :GZOr @L  :7vkEY:.                     \n");
printf("\t\t           r2i  uB5kF:;::.:iv77uNi                  \n");
printf("\t\t          Br                     j0.                \n");
printf("\t\t         7Bi                       ,qv            \n");
printf("\t\t       OB;                          N@B         \n");
printf("\t\t      S@J                            .@B.        \n");
printf("\t\t      Bj                               v8:.     \n");
printf("\t\t     PY      .,iL7v       ::iikv.        MB     \n");
printf("\t\t    B@   .J7,::.  r:    Lv: ,. .2;        BY    \n");
printf("\t\t   U@    P. ::.i. u.   Lr  k::2  U        BBr   \n");
printf("\t\t  7S:    L  LL,u7,5    iJ:.7.::  S        ,jv    \n");
printf("\t\t .kS     7;:,irrii       :r::ii:Yi         uM    \n");
printf("\t\t YB.                                       iB    \n");
printf("\t\t F@                .                       ,B    \n");
printf("\t\t Xj              .Z.    i                  .B    \n");
printf("\t\t 5:             .Z.     5r                  @    \n");
printf("\t\t 5:             i. :J:7, .                 7B    \n");
printf("\t\t G:         i                              k7    \n");
printf("\t\t @.        X:                             Jj:    \n");
printf("\t\t@G       .q   .::                        ,27     \n");
printf("\t\tBP       k  :;i,,:::,vL:                 JqL     \n");
printf("\t\t O8     :Yr::vrP:E:vL.u8vr Y:            @u      \n");
printf("\t\t  BJ     Y Jq;.i.i.,..urrZ :X          :B@        \n");
printf("\t\t  .B     v ,0rLL77r:.:7;7   i         L2YS        \n");
printf("\t\t   LB     i:.:::iuLi:7i           .72u: M         \n");
printf("\t\t    F,                           iJ,   vi         \n");
printf("\t\t      ii.:r                 ...::                 \t\n\n");  
printf ("\n\t\tVC EH MUITO DERP, QUALQUER UM FAZ MELHOR. \n\n");
}

//

if (pontostotal>=1251 && pontostotal<=2499){                                
printf("\t\t                    ..:irii:ri.                 \n");  
printf("\t\t               ,:7;7rr::.    :LY:                 \n");
printf("\t\t             LEL7:              iJ,               \n");
printf("\t\t           :ML                    k1              \n");
printf("\t\t          LP.                ivi.  O@             \n");
printf("\t\t        .M7                 7@r .u  k@.           \n");
printf("\t\t       S@,                :ki   @B@, PN           \n");
printf("\t\t    .rkX                 iq    i@@BMi B:          \n");
printf("\t\t    :@    ,7ur7Z@7       M          ,u B          \n");
printf("\t\t    Br   5:     :@B.     0:          v,,B.        \n");
printf("\t\t  7:O.  k@@5      :M,     Nv         ,1 OZ        \n");
printf("\t\t  v:v   @@BZ      .E       vU7:.   .iq   q5       \n");
printf("\t\t  7q    u;       rq          .rr7LL7i    vS.      \n");
printf("\t\t  rE    .1      2u                        Br      \n");
printf("\t\t  rX     ;Ur::LF:                         @u      \n");
printf("\t\t  7M       :,:,                           ik      \n");
printf("\t\t  U@                                      .G      \n");
printf("\t\t  ;B:                         GG          .P      \n");
printf("\t\t  .u5                         S@          ,7      \n");
printf("\t\t   51.               @v       j@           M      \n");
printf("\t\t   7L5               i@Gi.  .7@j           Bi     \n");
printf("\t\t    7@                 LOM8MOE.            @      \n");
printf("\t\t     OO                                   @j      \n");
printf("\t\t     .B1                                 XM       \n");
printf("\t\t      u.Nr.                             :B        \n");
printf("\t\t      r. :JL                            J:      \n\n");
printf ("\n\t\tVC AINDA EH MUITO NOOB, ESTUDE DERP. \n\n\n");
}

//

if (pontostotal>=2500 && pontostotal<=3499){
printf("\t\t                .:,,,:.                           \n");
printf("\t\t          ,7iiiY7i,:,r1Y:                         \n");
printf("\t\t       :F5Fi:::         7N1i                      \n");
printf("\t\t     ,@J                   rB7                    \n");
printf("\t\t     B.                      P@                   \n");
printf("\t\t    @.                        u@                  \n");
printf("\t\t   @;        ..                B.                 \n");
printf("\t\t  7@      ,:.::::::..,          B                 \n");
printf("\t\t  P     i;i.:,.,:.::,.:i        @v                \n");
printf("\t\t  J         .        .,.         @.               \n");
printf("\t\t  F        :i   :.       .r      .@               \n");
printf("\t\t  u .  .:;B@     ,B@r:.  Fk       u:              \n");
printf("\t\t  5 r BBLGi       .;87@B          .M              \n");
printf("\t\t  1   u7;@r:      r@Bv:u           @              \n");
printf("\t\t  2     .i@B      ,B1..  .         B              \n");
printf("\t\t  8   :   :,  ,,   r.   ::         @              \n");
printf("\t\t  X5  .i7      .  .   :rr          @              \n");
printf("\t\t  @7   r7   :r  .r   .:.          @              \n");
printf("\t\t    @       .1F: :k7 .7           rL              \n");
printf("\t\t    ,k     .2         :i          B.              \n");
printf("\t\t     B     B,           7         @               \n");
printf("\t\t     k1   :r  ,rS@u@5: :BL       @:               \n");
printf("\t\t      @:  :7@: .iir:,   5L      @Y                \n");
printf("\t\t       @   ..                  L5    XXXX  XX  XX  XXXX  XX   XX");
printf("\t\t       ,@:            , .     O0    XX  XX XX XX  XX  XX  XX XX\n");
printf("\t\t         5B   :,72i::LUi.   ;@i     XX  XX XXXX   XXXXXX   XX\n");
printf("\t\t          :BX   .,:ii:.   :BS       XX  XX XX XX  XX  XX   XX\n");
printf("\t\t            :@u:        :0F.         XXXX  XX  XX XX  XX   XX\n");
printf("\t\t               .,:v;7r7r,  \n\n");                       
printf("\n\t\tVC ACERTOU O QUE A MAIORIA JA SABE..APENAS ISSO.. \n\n");
}

//

if (pontostotal>=3500 && pontostotal<=4499){
printf("\t\t                     ..,,:,:                     \n");
printf("\t\t            .:r71O@@BBr::..:                   \n");
printf("\t\t           LL:.      :  ,vivBY                 \n");
printf("\t\t         .k:               .iB@.               \n");
printf("\t\t        ru                    7@i              \n");
printf("\t\t      :O.  .:::                @@              \n");
printf("\t\t    iu  7:.  :v,       77:;0v .OS             \n");
printf("\t\t    1,  u       JJ    :v     Li  L7            \n");
printf("\t\t   rB  P@@B1iriiiO   i@Eu7ii::G,  M2           \n");
printf("\t\t   iS  2L::      5   G        F.  .B           \n");
printf("\t\t   L    7,     ,ui   rr.    .1i    i7          \n");
printf("\t\t  ,7     .;7v77i       :r77ri       @r         \n");
printf("\t\t  7L                                L7         \n");
printf("\t\t  22                                .v         \n");
printf("\t\t  jS      .ir77vvL77rr::.            u         \n");
printf("\t\t  iB    rUL:.       ..,,,           .v         \n");
printf("\t\t   L.                               .u         \n");
printf("\t\t   77                                7         \n");
printf("\t\t   .@L                               J         \n");
printf("\t\t    :B                              27         \n");
printf("\t\t     v5,                           iB          \n");
printf("\t\t     :iri:.                        @           \n");
printf("\t\t      7  :J:                      rr         \n\n");
printf ("\n\t\t\tPARECE QUE NAO E TAO DERP: \n\n");
}

//

if (pontostotal>=4500 && pontostotal<=5499){
printf("\t\t                     ,:,:,,,                         \n");            
printf("\t\t               ,issr::,,,,:irssr:                     \n");           
printf("\t\t            ,rs:                :rr                    \n");          
printf("\t\t          ,sr,   ::i,::i:         :ss                  \n");          
printf("\t\t         r2   ,B2;: :, ,iGr   :52r: ,Br                 \n");         
printf("\t\t        Hs    B: , ,B@r  :B   @r,:,@B,s@                \n");         
printf("\t\t       5i     2s,,  ii,,sB,   Xi  :B@i s@                \n");        
printf("\t\t      rr       :;:::, ,i,      ir:    ,:Bs                \n");       
printf("\t\t      M                           ,:;:,  5,               \n");       
printf("\t\t     Si                              ,   :s                \n");      
printf("\t\t     B                       :rrrr2  s@   M                \n");      
printf("\t\t     @             :,  ,:rs5ss:, sB   :   B                \n");      
printf("\t\t     M,            ,, :5r,     ,Gs       ,H                 \n");     
printf("\t\t     i2                        ,         s;                \n");      
printf("\t\t      G                                  B                 \n");      
printf("\t\t      ,G                                9,                   \n");    
printf("\t\t       ,9                              2i                    \n");    
printf("\t\t        ,X,                          ,Si                    \n");     
printf("\t\t          ss,                      ,s2                       \n");    
printf("\t\t           ,ss:                  :ss,                        \n");    
printf("\t\t              issr:,     2    :ir:,                          \n");    
printf("\t\t                 ,irrri:r@B@B@s:                                \n"); 
printf("\t\t                       s9  @  ,rsss,                            \n"); 
printf("\t\t                     2B:   s:      :B@                          \n"); 
printf("\t\t                    @,      @ ,s@B@B@BS                        \n");  
printf("\t\t                  ,@   i2@B2@@s2r,  s,                         \n");  
printf("\t\t                  @B@B@B5i, :H                                 \n");  
printf("\t\t                   B  :      S                               \n\n");              
printf ("\n\t\t\tEH O FAMOSO CDF DA TURMA : \n\n");
}

//

if (pontostotal>5500){
printf("\t\t                          i: . .i::...                     \n");                 
printf("\t\t                        .:;ii7;ri .: .ri .                  \n");                
printf("\t\t                    .r7@27::.:722;2. :7ir7                     \n");             
printf("\t\t                  ;7:   :i:...7i    .Br .7r                   \n");              
printf("\t\t                i2.                   ::2SS2                    \n");            
printf("\t\t               2i     .i:ri::..:::::..     .2                     \n");          
printf("\t\t              2:      .7       .:riiir7r    2:                   \n");           
printf("\t\t             7r                     .:  S.  :i                     \n");         
printf("\t\t             7.                         .7  ;i                      \n");        
printf("\t\t             i7                             2.                     \n");         
printf("\t\t              2:                            2                      \n");         
printf("\t\t               2i                          ri                   \n");            
printf("\t\t                r7                        .S                    \n");            
printf("\t\t                 .7i                     .2                    \n");             
printf("\t\t                   .i7. ..:r2          .r7                     \n");             
printf("\t\t                  ..:;7r27i.@:..::::i:7i                       \n");             
printf("\t\t             :;7iri:        72; .:.:.                          \n");             
printf("\t\t          .7:..             iir.                                   \n");         
printf("\t\t         .0.                .2 2i                                \n");           
printf("\t\t        .X                   2  2r                                \n");          
printf("\t\t       :S                    2.  72.                              \n");          
printf("\t\t      i2                     i2   .77.                          \n");            
printf("\t\t     r2                       0     .77i.                         \n");          
printf("\t\t    ir                        rr       :i7ri.                     \n");          
printf("\t\t   rB::i                       2           .:ir7:              \n");             
printf("\t\t  27:7 .2i                     :7               .i2i               \n");         
printf("\t\t 27i 7:  :                      2:               r;@i             \n");          
printf("\t\t 2 :. :                          2               : :2             \n\n"); 
printf ("\n\t\t\tUM COMPLETO NERD SEM VIDA SOCIAL. : \n\n"); 
}
    
    
	printf ("\t\t\tRESULTADOS DO JOGO                  \n\n");
	printf ("\t\t\tENTER PARA CONFERIR SUA\n\t\t\tPONTUACAO EM CADA NIVEL...\n\n");
	printf ("\t\t\tParticipante: %s                    \n",nome);
	printf ("\t\t\tTotal de acertos  : %d              \n",certo_1+certo_2+certo_3);
	printf ("\t\t\tTotal de erros    : %d              \n",errado_1+errado_2+errado_3);
	printf ("\t\t\tPontuacao total   : %d              \n\n",pontostotal);
	getchar();
	if (nivel==1){
	goto nextnivel2;
    }
	
	nivelfacil:
    nextnivel2:
	printf ("\t\t\tNIVEL FACIL             \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_1);
	printf ("\t\t\tErros    : %d                        \n",errado_1);
	printf ("\t\t\tPontuacao: %d                        \n\n",certo_1*150);
	getchar();
	errado_1=0;
	certo_1=0;
	contadorperguntaf=1;
	if (nivel==1)
	goto nextnivel3; 
    if(nivel==2){
    system ("cls");                                                                //limpa a tela
	goto dificuldade;	
    }

	nivelmedio:
    nextnivel3: 	
	printf ("\t\t\tNIVEL MEDIO           \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_2); 
	printf ("\t\t\tErros    : %d                        \n",errado_2);
	printf ("\t\t\tPontuacao: %d                        \n\n",certo_2*200);
	getchar();
	errado_2=0;
	certo_2=0;
	contadorperguntam=1;
	if (nivel==1){
	goto nextnivel4;
    }
	if(nivel==3){
	system ("cls");                                                                //limpa a tela
	goto dificuldade;
    }
	
	niveldificil:
    nextnivel4:	
	printf ("\t\t\tNIVEL DIFICIL         \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_3);
	printf ("\t\t\tErros    : %d                        \n",errado_3);
	printf ("\t\t\tPontuacao: %d                        \n",certo_3*250);
	getchar();
	errado_3=0;
	certo_3=0;
	contadorperguntad=1;
	if(nivel==1 || nivel==4){
	system ("cls");                                                                //limpa a tela
	goto dificuldade;
    }
    printf ("\n\n");
    system ("PAUSE");
    return (0);
}
