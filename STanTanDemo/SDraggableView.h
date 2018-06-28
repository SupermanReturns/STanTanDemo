//
//  SDraggableView.h
//  STanTanDemo
//
//  Created by Superman on 2018/6/22.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import <UIKit/UIKit.h>
#define ROTATION_ANGLE M_PI/8
#define CLICK_ANIMATION_TIME 0.5
#define RESET_ANIMATION_TIME 0.3

@protocol SDraggableViewDelegate <NSObject>
-(void)cardSwiped:(UIView *)card LorR:(BOOL)isRight;
-(void)moveCards:(CGFloat)distance;
-(void)moveBackCards;
-(void)adjustOtherCards;
@end

@interface SDraggableView : UIView


@property (weak) id <SDraggableViewDelegate> delegate;

@property (nonatomic, strong)UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic)CGPoint originalPoint;
@property (nonatomic)CGPoint originalCenter;
@property (nonatomic)CGAffineTransform originalTransform;
@property (nonatomic)BOOL canPan;

@property (nonatomic)NSDictionary *userInfo;

@property (nonatomic,strong)UIImageView *headerImageView;
@property (nonatomic,strong)UILabel *numLabel;
@property (nonatomic,strong)UIButton* yesButton;
@property (nonatomic,strong)UIButton* noButton;



-(void)leftClickAction;
-(void)rightClickAction;
@end
