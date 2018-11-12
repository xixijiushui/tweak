//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALMVideoUploadModel, YKFAppjietuShareServiceGetEditInfoAPI, YKFFanplayFanWorkServiceAddFanWorkAPI, YKFFanplayFandomServiceShareRecommendAPI, YKFFanplayFocusServiceAddAPI, YKFFanplayFocusServiceListMineAPI, YKJSONClient;

@interface YCSEditManager : NSObject
{
    YKJSONClient *_jsonClient;
    YKFFanplayFocusServiceAddAPI *_addAPI;
    YKFFanplayFocusServiceListMineAPI *_listMineAPI;
    YKFFanplayFandomServiceShareRecommendAPI *_recommendAPI;
    YKFFanplayFanWorkServiceAddFanWorkAPI *_publishAPI;
    ALMVideoUploadModel *_videoUploadModel;
    long long _imageUploadToken;
    YKFAppjietuShareServiceGetEditInfoAPI *_getEditInfoAPI;
}

+ (id)sharedManager;
@property(retain, nonatomic) YKFAppjietuShareServiceGetEditInfoAPI *getEditInfoAPI; // @synthesize getEditInfoAPI=_getEditInfoAPI;
@property(nonatomic) long long imageUploadToken; // @synthesize imageUploadToken=_imageUploadToken;
@property(retain, nonatomic) ALMVideoUploadModel *videoUploadModel; // @synthesize videoUploadModel=_videoUploadModel;
@property(retain, nonatomic) YKFFanplayFanWorkServiceAddFanWorkAPI *publishAPI; // @synthesize publishAPI=_publishAPI;
@property(retain, nonatomic) YKFFanplayFandomServiceShareRecommendAPI *recommendAPI; // @synthesize recommendAPI=_recommendAPI;
@property(retain, nonatomic) YKFFanplayFocusServiceListMineAPI *listMineAPI; // @synthesize listMineAPI=_listMineAPI;
@property(retain, nonatomic) YKFFanplayFocusServiceAddAPI *addAPI; // @synthesize addAPI=_addAPI;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)jhw_publish:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)jhw_listFocusBarsWithOffset:(long long)arg1 rows:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)jhw_listFocusBars:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)jhw_listRelatedBarsWithMaterialId:(id)arg1 activityId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)jhw_joinCircleWithCircleId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)pressImage:(id)arg1 quality:(float)arg2;
- (void)getEditInfoWithShowId:(id)arg1 type:(long long)arg2 shareSource:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)listFocusBarsWithOffset:(long long)arg1 rows:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)listFocusBars:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)listRelatedBars:(long long)arg1 showId:(id)arg2 fandomIds:(id)arg3 shareScene:(int)arg4 materialId:(id)arg5 activityId:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)joinCircleWithCircleId:(id)arg1 pid:(int)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getUserInfo:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)uploadVideoWithFilePath:(id)arg1 title:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)uploadVideoWithFilePath:(id)arg1 title:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)uploadImageWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)uploadGifImageWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)uploadImage:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)publish:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getTopicWithCircleId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getGlobalConfigWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)deviceAgent;
- (id)urlForPath:(id)arg1;
- (id)baseUrl;
- (void)cancelAllOperations;

@end

