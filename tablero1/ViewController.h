//
//  ViewController.h
//  tablero1
//
//  Created by pau on 7/11/15.
//  Copyright © 2015 pau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end


// Crear un tablero de velocidad
//Implementar una numeracion

enum velocidades:int {
case apagado = 0
case velocidadBaja = 20
case velocidadMedia = 50
case velocidadAlta = 120
    
    
    init ( ){
        
        self = .apagado
    }
    
}

class auto{
    
    var velocidad = velocidades()
    
    init (velocidadInicial:velocidades){
        self.velocidad = .apagado
        
    }
    
    
    func cambioDeVelocidad(actual:Int, velocidadEnCadena : String) -> (Int, String){
        
        switch velocidad{
        case.apagado : print(cambioDeVelocidad(0,velocidadEnCadena: "apagado"))
        case.velocidadBaja : print(cambioDeVelocidad(20, velocidadEnCadena:"velocidadBaja"))
        case.velocidadMedia : print (cambioDeVelocidad(50, velocidadEnCadena: "velocidadMedia"))
        case.velocidadAlta : print (cambioDeVelocidad(120, velocidadEnCadena:"velocidadAlta"))
            
            
            
        }
        
        
    }
    
    

