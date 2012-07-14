/*******************************************************************************
 * Copyright (c) 2012, Jean-David Gadina <macmade@eosgarden.com>
 * All rights reserved
 ******************************************************************************/
 
/* $Id$ */

#ifndef __CE_MACROS_H__
#define __CE_MACROS_H__

#define L10N( __label__ )                       NSLocalizedString( [ NSString stringWithCString: __label__ encoding: NSUTF8StringEncoding ], nil )

#define RELEASE_IVAR( __ivar__ )                [ __ivar__ release ]; __ivar__ = nil

#define RESERVERD_IVARS( __cls__, __num__ )     id _ ## __cls__ ## _Reserved[ __num__ ] __attribute__( ( unused ) )

#define NOTIFICATION_CENTER                     ( ( NSNotificationCenter * )[ NSNotificationCenter  defaultCenter ] )
#define FILE_MANAGER                            ( ( NSFileManager        * )[ NSFileManager         defaultManager ] )
#define APPLICATION                             ( ( NSApplication        * )[ NSApplication         sharedApplication ] )
#define DEFAULTS                                ( ( NSUserDefaults       * )[ NSUserDefaults        standardUserDefaults ] )
#define BUNDLE                                  ( ( NSBundle             * )[ NSBundle              mainBundle ] )

#define Log( object )                                                           \
    NSLog                                                                       \
    (                                                                           \
        @"\n"                                                                   \
        @"\n"                                                                   \
        @"\tFile:           %@\n"                                               \
        @"\tLine:           %u\n"                                               \
        @"\tSymbol:         %s\n"                                               \
        @"\tAddress:        %p\n"                                               \
        @"\tRetain count:   %lu\n"                                              \
        @"\tClass:          %@\n"                                               \
        @"\tSuper class:    %@\n"                                               \
        @"\n"                                                                   \
        @"\tDescription:"                                                       \
        @"\n"                                                                   \
        @"\t%@\n"                                                               \
        @"\n",                                                                  \
        [ [ NSString stringWithFormat: @"%s", __FILE__ ] lastPathComponent ],   \
        __LINE__,                                                               \
        #object,                                                                \
        ( void * )object,                                                       \
        [ object retainCount ],                                                 \
        NSStringFromClass( [ object class ] ),                                  \
        NSStringFromClass( [ object superclass ] ),                             \
        object                                                                  \
    )

#define LogPoint( point )                       \
    NSLog                                       \
    (                                           \
        @"NSPoint:\n"                           \
        @"    X: %f\n"                          \
        @"    Y: %f",                           \
        point.x,                                \
        point.y                                 \
    )

#define LogSize( size )                         \
    NSLog                                       \
    (                                           \
        @"NSSize:\n"                            \
        @"    Width:  %f\n"                     \
        @"    Height: %f",                      \
        size.width,                             \
        size.height                             \
    )
 
#define LogRect( rect )                         \
    NSLog                                       \
    (                                           \
        @"NSRect:\n"                            \
        @"    X:      %f\n"                     \
        @"    Y:      %f\n"                     \
        @"    Width:  %f\n"                     \
        @"    Height: %f",                      \
        ( rect ).origin.x,                      \
        ( rect ).origin.y,                      \
        ( rect ).size.width,                    \
        ( rect ).size.height                    \
    )

#define LogRange( range )                       \
    NSLog                                       \
    (                                           \
        @"NSRange:\n"                           \
        @"    Location: %i\n"                   \
        @"    Length:   %i\n",                  \
        range.location,                         \
        range.length                            \
    )
    
#endif /* __CE_MACROS_H__ */