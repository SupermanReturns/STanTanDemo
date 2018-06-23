//
//  ViewController.h
//  STanTanDemo
//
//  Created by Superman on 2018/6/22.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SDraggableView.h"

#define SCREENWIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREENHEIGHT [[UIScreen mainScreen] bounds].size.height


#define PAN_DISTANCE 120
//#define CARD_WIDTH lengthFit(SCREENWIDTH-60*2)
//#define CARD_HEIGHT lengthFit(SCREENHEIGHT-25-60-35*2)

#define CARD_WIDTH SCREENWIDTH-50*2
#define CARD_HEIGHT  SCREENHEIGHT-25-60-35*2-64-49
@interface ViewController : UIViewController<SDraggableViewDelegate>

@property (retain,nonatomic)NSMutableArray* allCards;
@property (nonatomic) CGPoint lastCardCenter;
@property (nonatomic) CGAffineTransform lastCardTransform;

@property (nonatomic,strong)NSMutableArray *sourceObject;

@end

