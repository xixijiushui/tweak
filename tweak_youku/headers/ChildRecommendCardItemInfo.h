//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChildCardActionInfo, ChildShowMarkRBO, NSDictionary, NSString;

@interface ChildRecommendCardItemInfo : NSObject
{
    NSString *_intro;
    long long _brandId;
    long long _topicId;
    NSString *_name;
    long long _pkgId;
    NSString *_picIcon;
    ChildCardActionInfo *_action;
    ChildCardActionInfo *_hAction;
    NSString *_picChild;
    ChildShowMarkRBO *_mark;
    NSDictionary *_trackInfo;
}

@property(retain, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) ChildShowMarkRBO *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSString *picChild; // @synthesize picChild=_picChild;
@property(retain, nonatomic) ChildCardActionInfo *hAction; // @synthesize hAction=_hAction;
@property(retain, nonatomic) ChildCardActionInfo *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *picIcon; // @synthesize picIcon=_picIcon;
@property(nonatomic) long long pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
- (void).cxx_destruct;

@end

