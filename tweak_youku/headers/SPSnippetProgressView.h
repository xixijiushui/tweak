//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SPSnippetProgressView : UIView
{
    NSArray *_watchSheSections;
    double _backgroundValue;
}

@property(nonatomic) double backgroundValue; // @synthesize backgroundValue=_backgroundValue;
@property(copy, nonatomic) NSArray *watchSheSections; // @synthesize watchSheSections=_watchSheSections;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)caculateOriginXFromProgressValue:(double)arg1;
- (void)setupSections:(id)arg1 backgroundValue:(double)arg2;
- (void)appendSubViews;
- (id)initWithFrame:(struct CGRect)arg1 sections:(id)arg2 backgroundValue:(double)arg3;

@end

