//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "AliVideoEffectSelectable.h"

@class NSString;

@interface AliPictureEffectInfo : TBJSONModel <AliVideoEffectSelectable>
{
    _Bool _canAdjust;
    _Bool _reverse;
    NSString *_displayName;
    NSString *_overlayColor;
    NSString *_effectID;
    NSString *_icon;
}

@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) _Bool canAdjust; // @synthesize canAdjust=_canAdjust;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(copy, nonatomic) NSString *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

