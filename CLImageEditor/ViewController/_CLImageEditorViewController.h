//
//  _CLImageEditorViewController.h
//
//  Created by sho yakushiji on 2013/11/05.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import "CLImageEditor.h"
#import "CLBleedArea.h"

@interface _CLImageEditorViewController : CLImageEditor
<UIScrollViewDelegate, UIBarPositioningDelegate>
{
    IBOutlet __weak UINavigationBar *_navigationBar;
    IBOutlet __weak UIScrollView *_scrollView;
}
@property (nonatomic, strong) UIImageView  *imageView;
@property (nonatomic, weak) IBOutlet UIScrollView *menuView;
@property (nonatomic, readonly) UIScrollView *scrollView;

// -- Danish : orignal Image width and image frame
@property (nonatomic, assign) float imageWidth;
@property (nonatomic, assign) CGRect imageFrame;

// Crop Rect and angle
@property (nonatomic, assign) CGRect cropRect;
@property (nonatomic, assign) double angle;
@property (nonatomic, assign) bool isCropingFirstTime;
@property (nonatomic, assign) CGRect trimRect;


// Bleed Area for X and Y
@property (nonatomic, assign) double bleedAreaX;
@property (nonatomic, assign) double bleedAreaY;
@property (nonatomic, assign) double isBleedAreaShow;
@property (nonatomic, strong) CLBleedArea *clBleedArea;

//BleedCropPercentage
@property (nonatomic, assign) double bleedAreaLeftByPercentage;
@property (nonatomic, assign) double bleedAreaRightByPercentage;
@property (nonatomic, assign) double bleedAreaTopByPercentage;
@property (nonatomic, assign) double bleedAreaBottomByPercentage;

// font
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIFont *boldFont;

// Content Mode
@property (nonatomic, assign) UIViewContentMode *contentMode;

// Aspect Ratio
@property (nonatomic, assign) CGSize aspectRatio;

// Save Translucent
@property (nonatomic, assign) bool isTranslucent;

//Min Rect Size
@property (nonatomic, assign) CGSize minRectSize;

@property (nonatomic, strong) NSMutableDictionary *imageProperty;

- (IBAction)pushedCloseBtn:(id)sender;
- (IBAction)pushedFinishBtn:(id)sender;


- (id)initWithImage:(UIImage*)image;


- (void)fixZoomScaleWithAnimated:(BOOL)animated;
- (void)resetZoomScaleWithAnimated:(BOOL)animated;

@end
