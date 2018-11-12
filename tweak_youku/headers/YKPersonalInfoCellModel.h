//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface YKPersonalInfoCellModel : NSObject
{
    NSString *_title;
    NSString *_detailText;
    NSString *_detailImgUrl;
    UIImage *_detailImg;
    double _rowHeight;
    long long _cellType;
    long long _lineType;
    UIColor *_bgColor;
}

@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) long long lineType; // @synthesize lineType=_lineType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) UIImage *detailImg; // @synthesize detailImg=_detailImg;
@property(copy, nonatomic) NSString *detailImgUrl; // @synthesize detailImgUrl=_detailImgUrl;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
