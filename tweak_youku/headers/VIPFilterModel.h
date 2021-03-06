//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, VIPFilterChannelModel, VIPFilterModuleLoadMoreItemList, VIPFilterModuleResultModel;

@interface VIPFilterModel : NSObject
{
    _Bool _success;
    NSArray *_channelsArr;
    VIPFilterModuleResultModel *_moduleResult;
    VIPFilterChannelModel *_parentChannel;
    VIPFilterChannelModel *_channel;
    VIPFilterModuleLoadMoreItemList *_loadMoreItemList;
    NSString *_refreshImg;
    long long _httpStatusCode;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(copy, nonatomic) NSString *refreshImg; // @synthesize refreshImg=_refreshImg;
@property(retain, nonatomic) VIPFilterModuleLoadMoreItemList *loadMoreItemList; // @synthesize loadMoreItemList=_loadMoreItemList;
@property(retain, nonatomic) VIPFilterChannelModel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) VIPFilterChannelModel *parentChannel; // @synthesize parentChannel=_parentChannel;
@property(retain, nonatomic) VIPFilterModuleResultModel *moduleResult; // @synthesize moduleResult=_moduleResult;
@property(retain, nonatomic) NSArray *channelsArr; // @synthesize channelsArr=_channelsArr;
- (void).cxx_destruct;
- (void)setDataWithParameters:(id)arg1;

@end

