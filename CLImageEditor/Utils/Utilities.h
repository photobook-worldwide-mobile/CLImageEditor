//
//  Utilities.h
//  CLImageEditorDemo
//
//  Created by Danish on 02/04/2018.
//  Copyright © 2018 CALACULU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CLClippingTool.h"

@interface Utilities : NSObject

@property (nonatomic, assign) CGRect cropRect;
@property (nonatomic, assign) double angle;
@property (nonatomic, assign) double scale;
@property (nonatomic, assign) BOOL isCrop;
@property (nonatomic, assign) BOOL isRotate;
@property (nonatomic, assign) CATransform3D transform;

+ (id)sharedUtilities;

-(void)setImageAngle:(double)angle;
-(double)getImageAngle:(double)angle;
-(CATransform3D)getTransfromImage;

@end
