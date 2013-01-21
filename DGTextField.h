//
//  DGTextField.h
//  Ogonium
//
//  Created by Goldberg, Dov on 1/17/13.
//  Copyright (c) 2013 Ogonium All rights reserved.
//

/*

*/

#import <UIKit/UIKit.h>

@interface DGTextField : UITextField {
    UIView *cursor_;
}

@property (nonatomic, strong) UIColor *cursorColor;

@end
