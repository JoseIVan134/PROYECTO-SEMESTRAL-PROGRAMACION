//Axel Lopez Alquicra
//Jose Ivan De Jesus Vazquez
//Jose Antonio Villalon Contreras
#include <stdio.h>

int main() {
    // Libreria para uso de archivos
    // Variables para almacenar el pedido de los productos
    int ticket, opcion, producto, cantidad, Precio_total, Precio_unitario, articulos_en_ticket, total_ticket;
    int cantidad_chocolate, cantidad_tres_leches, cantidad_cheesecake, cantidad_cafe, cantidad_fresa;
    int cantidad_oreo, cantidad_imposible, cantidad_cupcake, bolsa_de_galletas, bolsa_de_dulces;
    int velas, gelatina, cantidad_chocolate_caliente, cantidad_cafe_2, cantidad_capuchino;
    int quitar, compra, producto_a_quitar, cantidad_a_quitar; 

    ticket = 1;
    // Ciclo para 4 tickets
    while(ticket <= 4) {
        // Inicialización de variables
        cantidad_chocolate = 0;
        cantidad_tres_leches = 0;
        cantidad_cheesecake = 0;
        cantidad_cafe = 0;
        cantidad_fresa = 0;
        cantidad_oreo = 0;
        cantidad_imposible = 0;
        cantidad_cupcake = 0;
        bolsa_de_galletas = 0;
        bolsa_de_dulces = 0;
        velas = 0;
        gelatina = 0;
        cantidad_chocolate_caliente = 0;
        cantidad_cafe_2 = 0;
        cantidad_capuchino = 0;

        printf("Ticket %d \n", ticket);

        opcion = 0;
        articulos_en_ticket = 0;
        total_ticket = 0;
        // Ciclo para seleccionar productos mientras no se seleccione opción 16 o se llegue a 3 productos
        while(opcion != 16 && articulos_en_ticket < 3) { 
            printf("Selecciona un producto del menú: \n");
            printf("1. Pastel de chocolate\n");
            printf("2. Pastel de tres leches\n");
            printf("3. Cheesecake\n");
            printf("4. Pastel de café\n");
            printf("5. Pastel de fresa\n");
            printf("6. Pastel de oreo\n");
            printf("7. Pastel imposible\n");
            printf("8. Cupcake\n");
            printf("9. Bolsa de galletas\n");
            printf("10. Bolsa de dulces\n");
            printf("11. Velas\n");
            printf("12. Gelatina\n");
            printf("13. Chocolate caliente\n");
            printf("14. Café\n");
            printf("15. Capuchino\n");
            printf("16. Ninguna opción\n");
            scanf("%d", &producto);
            // Selección según el producto
            switch (producto) {
                case 1:
                    Precio_unitario = 320;
                    printf("Escogiste el pastel de chocolate, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles de chocolate deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);    
                        cantidad_chocolate += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 2:
                    Precio_unitario = 250;
                    printf("Escogiste el pastel de tres leches, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles de tres leches deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total); 
                        cantidad_tres_leches += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 3:
                    Precio_unitario = 180;
                    printf("Escogiste el cheesecake, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos cheesecakes deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_cheesecake += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 4:
                    Precio_unitario = 220;
                    printf("Escogiste el pastel de café, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles de café deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_cafe += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 5:
                    Precio_unitario = 200;
                    printf("Escogiste el pastel de fresa, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles de fresa deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_fresa += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 6:
                    Precio_unitario = 210;
                    printf("Escogiste el pastel de oreo, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles de oreo deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_oreo += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 7:
                    Precio_unitario = 250;
                    printf("Escogiste el pastel imposible, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos pasteles imposibles deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_imposible += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 8:
                    Precio_unitario = 80;
                    printf("Escogiste el cupcake, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos cupcakes deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_cupcake += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 9:
                    Precio_unitario = 30;
                    printf("Escogiste la bolsa de galletas, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántas bolsas deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        bolsa_de_galletas += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 10:
                    Precio_unitario = 25;
                    printf("Escogiste la bolsa de dulces, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántas bolsas deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        bolsa_de_dulces += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 11:
                    Precio_unitario = 7;
                    printf("Escogiste las velas, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántas velas deseas? ");scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        velas += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 12:
                    Precio_unitario = 50;
                    printf("Escogiste la gelatina, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántas gelatinas deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        gelatina += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 13:
                    Precio_unitario = 45;
                    printf("Escogiste el chocolate caliente, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuantos chocolates calientes deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_chocolate_caliente += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 14:
                    Precio_unitario = 30;
                    printf("Escogiste el café, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántos cafés deseas? "); 
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_cafe_2 += cantidad;
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 15:
                    Precio_unitario = 35;
                    printf("Escogiste el capuchino, este vale %d pesos.\n", Precio_unitario);
                    printf("¿Cuántos capuchinos deseas? ");
                    scanf("%d", &cantidad);
                    if(cantidad <= 4) {
                        Precio_total = Precio_unitario * cantidad;
                        printf("El precio total de tu selección es: %d pesos.\n", Precio_total);
                        cantidad_capuchino += cantidad; 
                        articulos_en_ticket++;
                        total_ticket += Precio_total;
                    } else {
                        printf("Cantidad máxima de productos por selección es de 4.\n");
                    }
                    break;
                case 16: // Terminar el ciclo de selección de productos si el usuario elige la opción 16
                    printf("No seleccionaste ningún producto, saliendo del ciclo.\n");
                    articulos_en_ticket = 3;
                    break;
                default: 
                    printf("Opción no valida, por favor elige un número entre 1 y 16.\n");
            } // Termina el ciclo de selección de productos
            if(articulos_en_ticket < 3) {
                // Si el usuario ha agregado menos de 3 artículos, le permite agregar más
                printf("Puedes añadir un artículo más a este ticket.\n");
            }
        }

        // Guardar el ticket en un archivo
        FILE *file;
        char filename[20];
        sprintf(filename, "ticket_%d.txt", ticket);
        file = fopen(filename, "w");
        if (file == NULL) {
            printf("Error al abrir el archivo para guardar el ticket.\n");
            return 1;
        }
        // Mostrar el pedido completo del ticket
        fprintf(file, "Tu pedido para el Ticket %d es:\n", ticket);
        if (cantidad_chocolate > 0) {
            fprintf(file, "%d Pasteles de chocolate\n", cantidad_chocolate);
        }
        if (cantidad_tres_leches > 0) {
            fprintf(file, "%d Pasteles de tres leches\n", cantidad_tres_leches);
        }
        if (cantidad_cheesecake > 0) {
            fprintf(file, "%d Cheesecake\n", cantidad_cheesecake);
        }
        if (cantidad_cafe > 0) {
            fprintf(file, "%d Pasteles de café\n", cantidad_cafe);
        }
        if (cantidad_fresa > 0) {
            fprintf(file, "%d Pasteles de fresa\n", cantidad_fresa);
        }
        if (cantidad_oreo > 0) {fprintf(file, "%d Pasteles de oreo\n", cantidad_oreo);
        }
        if (cantidad_imposible > 0) {
            fprintf(file, "%d Pasteles imposibles\n", cantidad_imposible);
        }
        if (cantidad_cupcake > 0) {
            fprintf(file, "%d Cupcakes\n", cantidad_cupcake);
        }
        if (bolsa_de_galletas > 0) {
            fprintf(file, "%d Bolsa de galletas\n", bolsa_de_galletas);
        }
        if (bolsa_de_dulces > 0) {
            fprintf(file, "%d Bolsa de dulces\n", bolsa_de_dulces);
        }
        if (velas > 0) {
            fprintf(file, "%d Velas\n", velas);
        }
        if (gelatina > 0) {
            fprintf(file, "%d Gelatinas\n", gelatina);
        }
        if (cantidad_chocolate_caliente > 0) {
            fprintf(file, "%d Chocolate caliente\n", cantidad_chocolate_caliente);
        }
        if (cantidad_cafe_2 > 0) {
            fprintf(file, "%d Café\n", cantidad_cafe_2);
        }
        if (cantidad_capuchino > 0) {
            fprintf(file, "%d Capuchino\n", cantidad_capuchino);
        }
        fprintf(file, "Total del ticket %d es: %d pesos.\n", ticket, total_ticket);
        fclose(file);

        printf("Total del ticket %d es: %d pesos.\n", ticket, total_ticket);
        printf("¿Deseas quitar algún producto del ticket?\nEscribe 1 para sí, escribe 0 para no: ");
        scanf("%d", &quitar);
        if (quitar == 1) {
            // Mostrar los productos seleccionados con sus cantidades
            printf("Los productos que seleccionaste son: ");
            if (cantidad_chocolate > 0) { 
                printf("1. Pasteles de chocolate: %d unidades.\n", cantidad_chocolate);
            }
            if (cantidad_tres_leches > 0) {
                printf("2. Pasteles de tres leches: %d unidades.\n", cantidad_tres_leches);
            }         
            if (cantidad_cheesecake > 0) { 
                printf("3. Cheesecakes: %d unidades.\n", cantidad_cheesecake);
            }        
            if (cantidad_cafe > 0) { 
                printf("4. Pasteles de café: %d unidades.\n", cantidad_cafe);
            }    
            if (cantidad_fresa > 0) { 
                printf("5. Pasteles de fresa: %d unidades.\n", cantidad_fresa);
            }
            if (cantidad_oreo > 0) { 
                printf("6. Pasteles de oreo: %d unidades.\n", cantidad_oreo);
            }
            if (cantidad_imposible > 0) { 
                printf("7. Pasteles imposibles: %d unidades.\n", cantidad_imposible);
            }
            if (cantidad_cupcake > 0) { 
                printf("8. Cupcakes: %d unidades.\n", cantidad_cupcake);
            }
            if (bolsa_de_galletas > 0) { 
                printf("9. Bolsas de galletas: %d unidades.\n", bolsa_de_galletas);
            }
            if (bolsa_de_dulces > 0) { 
                printf("10. Bolsas de dulces: %d unidades.\n", bolsa_de_dulces);
            }
            if (velas > 0) { 
                printf("11. Velas: %d unidades.\n", velas);
            }
            if (gelatina > 0) { 
                printf("12. Gelatinas: %d unidades.\n", gelatina);
            }
            if (cantidad_chocolate_caliente > 0) {
                printf("13. Chocolate caliente: %d unidades.\n", cantidad_chocolate_caliente);
            }
            if (cantidad_cafe_2 > 0) {
                printf("14. Café: %d unidades.\n", cantidad_cafe_2);
            }
            if (cantidad_capuchino > 0) { 
                printf("15. Capuchino: %d unidades.\n", cantidad_capuchino);
            }
            // Pedir al usuario que seleccione qué producto desea quitar
            printf("Selecciona el número del producto que deseas quitar: \n");
            // Verificar si el producto seleccionado es válido
            scanf("%d", &producto_a_quitar);
            if (producto_a_quitar >= 1 && producto_a_quitar <= 15) {
                // Eliminar producto según selección
                printf("¿Cuantas unidades de %d deseas quitar? \n", producto_a_quitar);
                scanf("%d", &cantidad_a_quitar);switch (producto_a_quitar) {
                    // Si la cantidad a quitar es válida (no mayor que la cantidad seleccionada)
                    case 1:
                        if (cantidad_a_quitar <= cantidad_chocolate) {
                            cantidad_chocolate -= cantidad_a_quitar;
                            total_ticket -= 320 * cantidad_a_quitar;
                        } else 
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 2:
                        if (cantidad_a_quitar <= cantidad_tres_leches) {
                            cantidad_tres_leches -= cantidad_a_quitar;
                            total_ticket -= 250 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 3:
                        if (cantidad_a_quitar <= cantidad_cheesecake) {
                            cantidad_cheesecake -= cantidad_a_quitar; 
                            total_ticket -= 180 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 4:
                        if (cantidad_a_quitar <= cantidad_cafe) {
                            cantidad_cafe -= cantidad_a_quitar; 
                            total_ticket -= 220 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 5:
                        if (cantidad_a_quitar <= cantidad_fresa) {
                            cantidad_fresa -= cantidad_a_quitar; 
                            total_ticket -= 200 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 6: 
                        if (cantidad_a_quitar <= cantidad_oreo) {
                            cantidad_oreo -= cantidad_a_quitar;
                            total_ticket -= 210 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 7: 
                        if (cantidad_a_quitar <= cantidad_imposible) {
                            cantidad_imposible -= cantidad_a_quitar; 
                            total_ticket -= 250 * cantidad_a_quitar;
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 8:
                        if (cantidad_a_quitar <= cantidad_cupcake) {
                            cantidad_cupcake -= cantidad_a_quitar; 
                            total_ticket -= 80 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 9:
                        if (cantidad_a_quitar <= bolsa_de_galletas) {
                            bolsa_de_galletas -= cantidad_a_quitar; 
                            total_ticket -= 30 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 10:
                        if (cantidad_a_quitar <= bolsa_de_dulces) {
                            bolsa_de_dulces -= cantidad_a_quitar; 
                            total_ticket -= 25 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 11:
                        if (cantidad_a_quitar <= velas) {
                            velas -= cantidad_a_quitar; 					
                            total_ticket -= 7 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 12: 
                        if (cantidad_a_quitar <= gelatina) {
                            gelatina -= cantidad_a_quitar; 
                            total_ticket -= 50 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 13:
                        if (cantidad_a_quitar <= cantidad_chocolate_caliente) {
                            cantidad_chocolate_caliente -= cantidad_a_quitar;
                            total_ticket -= 45 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 14: 
                        if (cantidad_a_quitar <= cantidad_cafe_2) { 
                            cantidad_cafe_2 -= cantidad_a_quitar; 
                            total_ticket -= 30 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                    case 15: 
                        if (cantidad_a_quitar <= cantidad_capuchino) {
                            cantidad_capuchino -= cantidad_a_quitar; 
                            total_ticket -= 35 * cantidad_a_quitar; 
                        } else
                            printf("No puedes quitar más unidades de las que tienes.\n");
                        break;
                } printf("El total actualizado del ticket es: %d pesos.\n", total_ticket);
            } else {
                printf("Opción no válida o no seleccionaste un producto válido.\n");
            }   
        } else {
            printf("No deseaste quitar ningún artículo.\n"); 
        }
        printf("Fin del Ticket %d\n", ticket); 
        ticket++;
    }

    printf("¿Deseas consultar algún ticket de compra? Presiona 1 para sí o presiona 0 para no\n"); 
    scanf("%d", &quitar);
    if (quitar == 1) {
        printf("¿Qué ticket deseas consultar?\n"); 
        scanf("%d", &ticket);
        if (ticket >= 1 && ticket <= 4) {
            printf("Escogiste ver el ticket %d\n", ticket);
            // Aquí esta la lógica para mostrar el contenido del ticket desde el archivo
            char Archivo[20];
            sprintf(Archivo, "ticket_%d.txt", ticket);
            FILE *archivo = fopen(Archivo, "r");
            if (archivo != NULL) {
                char linea[256];
                while (fgets(linea, sizeof(linea), archivo)) {
                    printf("%s", linea);
                }
                fclose(archivo);
            } else {
                printf("No se pudo abrir el archivo del ticket.\n");
            }
        } else {
            printf("Opción no válida, no existe ese ticket.\n");
        }
    }
    printf("¡Gracias por tu compra!\n");

    return 0;
}