//
//  arithematic.h
//  arithematic
//
//  Created by Student on 03/05/24.
//

#ifndef ARITHEMATIC_H
#define ARITHEMATIC_H

#ifdef VERSION_4_0
#include "core/object/object.h"
#endif

#ifdef VERSION_3_X
#include "core/object.h"
#endif

#import <FirebaseCore/FirebaseCore.h>
#import <FirebaseAuth/FirebaseAuth.h>

class Arithematic : public Object {

    GDCLASS(Arithematic, Object);

    static Arithematic *instance;

public:
    void signup();
    void login();
    static Arithematic *get_singleton();
    
    Arithematic();
    ~Arithematic();

protected:
    static void _bind_methods();
};

#endif
