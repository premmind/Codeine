/*******************************************************************************
 * Copyright (c) 2012, Jean-David Gadina <macmade@eosgarden.com>
 * All rights reserved
 ******************************************************************************/
 
/* $Id$ */

@class CETextEncoding;

@interface CETextEncodingPopUpButton: NSPopUpButton
{
@protected
    
    
    
@private
    
    RESERVERD_IVARS( CETextEncodingPopUpButton , 5 );
}

- ( CETextEncoding * )selectedTextEncoding;
- ( NSStringEncoding )selectedStringEncoding;

@end