//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface YKHLPageIndicatorView : UIView
{
    long long _totalPageNum;
    long long _nowPageNum;
    NSMutableArray *_arrPoint;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSMutableArray *arrPoint; // @synthesize arrPoint=_arrPoint;
@property(nonatomic) long long nowPageNum; // @synthesize nowPageNum=_nowPageNum;
@property(nonatomic) long long totalPageNum; // @synthesize totalPageNum=_totalPageNum;
- (void).cxx_destruct;
- (void)moveToPage:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupUI;

@end
