//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIScrollView;

@interface YKPAssociateScrollLayout : NSObject
{
    UIScrollView *_masterScrollView;
    NSMutableArray *_associateScrollViews;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *associateScrollViews; // @synthesize associateScrollViews=_associateScrollViews;
@property(nonatomic) __weak UIScrollView *masterScrollView; // @synthesize masterScrollView=_masterScrollView;
- (void).cxx_destruct;
- (void)masterScrollViewDidScroll:(id)arg1;
- (void)initialize;
- (id)init;

@end

