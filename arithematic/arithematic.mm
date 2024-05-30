//
//  arithematic.m
//  arithematic
//
//  Created by Student on 03/05/24.
//

#import <Foundation/Foundation.h>

#ifdef VERSION_4_0
#include "core/object/class_db.h"
#else
#include "core/class_db.h"
#endif

#include "arithematic.h"
//#include "arithematic-Swift.h"

Arithematic *Arithematic::instance = NULL;

Arithematic::Arithematic() {
    instance = this;
    NSLog(@"initialize arithematic");
//    [FIRApp configure];
}

Arithematic::~Arithematic() {
    if (instance == this) {
        instance = NULL;
    }
    NSLog(@"deinitialize arithematic");
}

Arithematic *Arithematic::get_singleton() {
    return instance;
};


void Arithematic::_bind_methods() {
    ADD_SIGNAL(MethodInfo("multiply_result", PropertyInfo(Variant::STRING, "result")));
    
    ClassDB::bind_method("signup", &Arithematic::signup);
    ClassDB::bind_method("login", &Arithematic::login);
}

void Arithematic::signup() {
    NSString *email = @"test@example.com";
    NSString *password = @"testpassword123";

    [[FIRAuth auth] createUserWithEmail:email
                               password:password
                             completion:^(FIRAuthDataResult * _Nullable authResult,
                                          NSError * _Nullable error) {
        if (error) {
            // Handle error
            NSLog(@"Error creating user: %@", error.localizedDescription);
        } else {
            // User creation successful, you can access the user via authResult.user
            NSLog(@"User created successfully: %@", authResult.user);
        }
    }];
}

void Arithematic::login() {
   
}


//void Arithematic::multiply(){
//    emit_signal("multiply_result", "Hello from Godot");
//}
