//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "YKFJSONDataAccessProtocol.h"

@class NSDictionary, NSString, UIImage;

@protocol YKFShareObjProtocol <NSObject, YKFJSONDataAccessProtocol>
- (_Bool)canShareTofriend;
- (NSString *)listenFileUrlForShare;
- (UIImage *)thumbImageForShare;
- (NSString *)thumbImageURLForShare;
- (NSString *)detailURLForShare;
- (NSString *)descForShare;
- (NSString *)titleForShare;
- (NSString *)shareXiamiSubType;
- (NSString *)shareObjectID;
- (int)shareObjType;

@optional
- (NSDictionary *)musicAnalyticsDictionary;
- (NSDictionary *)h5AnalyticsDictionary;
- (NSDictionary *)shareAnalyticsExceptMusicAndH5Dictionary;
- (NSString *)shareSourceString;
- (NSString *)shareFullContentForWeixinOrZFB;
- (NSString *)shareContent;
@end

