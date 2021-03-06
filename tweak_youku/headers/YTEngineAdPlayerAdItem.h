//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineAdPlayerAdItem.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface YTEngineAdPlayerAdItem : NSObject <YTEngineAdPlayerAdItem>
{
    _Bool mIsLocalUrl;
    _Bool mIsSeamlessVideo;
    _Bool mIsVrAdType;
    int mSdk;
    int mCuf;
    int mAdType;
    int mAdDuration;
    int mVt;
    int mVp;
    int mCf;
    NSString *mStatus;
    long long mCode;
    NSString *mCuu;
    NSString *mResource;
    NSString *mResourceType;
    NSString *mClickUrl;
    NSString *mVc;
    NSString *mVn;
    NSString *mVsc;
    NSString *mBandResource;
    NSString *mVid;
    NSMutableArray *mSuArray;
    NSMutableArray *mSusArray;
    NSMutableArray *mSueArray;
    NSMutableArray *mCumArray;
    NSMutableArray *mShuArray;
    NSDictionary *mEmDictionary;
    NSArray *mAtsArray;
    NSString *mUserErrorDesc;
    NSString *mUserErrorLink;
    long long mCb;
}

@property(nonatomic) long long cb; // @synthesize cb=mCb;
@property(copy, nonatomic) NSString *userErrorLink; // @synthesize userErrorLink=mUserErrorLink;
@property(copy, nonatomic) NSString *userErrorDesc; // @synthesize userErrorDesc=mUserErrorDesc;
@property(nonatomic) _Bool isVrAdType; // @synthesize isVrAdType=mIsVrAdType;
@property(retain, nonatomic) NSArray *atsArray; // @synthesize atsArray=mAtsArray;
@property(nonatomic) _Bool isSeamlessVideo; // @synthesize isSeamlessVideo=mIsSeamlessVideo;
@property(nonatomic) _Bool isLocalUrl; // @synthesize isLocalUrl=mIsLocalUrl;
@property(retain, nonatomic) NSDictionary *emDictionary; // @synthesize emDictionary=mEmDictionary;
@property(retain, nonatomic) NSMutableArray *shuArray; // @synthesize shuArray=mShuArray;
@property(retain, nonatomic) NSMutableArray *cumArray; // @synthesize cumArray=mCumArray;
@property(retain, nonatomic) NSMutableArray *sueArray; // @synthesize sueArray=mSueArray;
@property(retain, nonatomic) NSMutableArray *susArray; // @synthesize susArray=mSusArray;
@property(retain, nonatomic) NSMutableArray *suArray; // @synthesize suArray=mSuArray;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=mVid;
@property(nonatomic) int cf; // @synthesize cf=mCf;
@property(copy, nonatomic) NSString *bandResource; // @synthesize bandResource=mBandResource;
@property(copy, nonatomic) NSString *vsc; // @synthesize vsc=mVsc;
@property(nonatomic) int vp; // @synthesize vp=mVp;
@property(copy, nonatomic) NSString *vn; // @synthesize vn=mVn;
@property(retain, nonatomic) NSString *vc; // @synthesize vc=mVc;
@property(nonatomic) int vt; // @synthesize vt=mVt;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=mClickUrl;
@property(copy, nonatomic) NSString *resourceType; // @synthesize resourceType=mResourceType;
@property(copy, nonatomic) NSString *resource; // @synthesize resource=mResource;
@property(nonatomic) int adDuration; // @synthesize adDuration=mAdDuration;
@property(nonatomic) int adType; // @synthesize adType=mAdType;
@property(copy, nonatomic) NSString *cuu; // @synthesize cuu=mCuu;
@property(nonatomic) int cuf; // @synthesize cuf=mCuf;
@property(nonatomic) int sdk; // @synthesize sdk=mSdk;
@property(nonatomic) long long code; // @synthesize code=mCode;
@property(copy, nonatomic) NSString *status; // @synthesize status=mStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

