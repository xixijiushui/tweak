//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ADDotModel : NSObject
{
    NSString *_outRectHeight;
    NSString *_outRectWidth;
    NSString *_x;
    NSString *_y;
    NSString *_width;
    NSString *_height;
    NSMutableArray *_keyframetimes;
    NSMutableArray *_c_scene;
    NSMutableArray *_c_product;
    double _startTime;
    double _endTime;
    NSString *_sc;
    NSString *_gd;
    NSString *_itemType;
}

@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *gd; // @synthesize gd=_gd;
@property(retain, nonatomic) NSString *sc; // @synthesize sc=_sc;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *c_product; // @synthesize c_product=_c_product;
@property(retain, nonatomic) NSMutableArray *c_scene; // @synthesize c_scene=_c_scene;
@property(retain, nonatomic) NSMutableArray *keyframetimes; // @synthesize keyframetimes=_keyframetimes;
@property(retain, nonatomic) NSString *height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *y; // @synthesize y=_y;
@property(retain, nonatomic) NSString *x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *outRectWidth; // @synthesize outRectWidth=_outRectWidth;
@property(retain, nonatomic) NSString *outRectHeight; // @synthesize outRectHeight=_outRectHeight;
- (void).cxx_destruct;
- (void)setValueWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

