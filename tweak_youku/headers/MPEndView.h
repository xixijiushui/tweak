//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModuleView.h"

@class ActivityView, NSArray, NSMutableArray, YKImageManager, YKJSONClient;

@interface MPEndView : CPModuleView
{
    NSMutableArray *_grids;
    long long crow;
    long long ccol;
    unsigned long long _moduleID;
    id <MediaPlayerFeature><GeneralPlayerFeature> _moduleDelegate;
    ActivityView *_activator;
    YKJSONClient *_jsonClient;
    YKImageManager *_imgClient;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) YKImageManager *imgClient; // @synthesize imgClient=_imgClient;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) ActivityView *activator; // @synthesize activator=_activator;
- (void)setModuleDelegate:(id)arg1;
- (id)moduleDelegate;
- (void)setModuleID:(unsigned long long)arg1;
- (unsigned long long)moduleID;
- (void).cxx_destruct;
- (void)deinitModule;
- (void)pinch:(id)arg1;
- (void)tap:(id)arg1;
- (void)setup;
- (void)endPlayCode:(long long)arg1;
- (void)enableBackTitle:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layout:(long long)arg1;
- (void)willPlay;
- (void)error:(long long)arg1;
- (void)initModule;
- (long long)viewIndex;
- (void)dealloc;

@end
