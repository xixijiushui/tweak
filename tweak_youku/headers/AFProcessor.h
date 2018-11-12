//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFProcessor : NSObject
{
    CDUnknownBlockType _routeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType routeBlock; // @synthesize routeBlock=_routeBlock;
- (void).cxx_destruct;
- (id)processJSCommand:(id)arg1;
- (id)analyseJSCommand:(id)arg1;
- (id)deCryptData:(id)arg1 info:(struct AFTaskInfoData)arg2;
- (id)enCryptData:(id)arg1 info:(struct AFTaskInfoData)arg2;
- (_Bool)needUpdatePublicKeyWithJson:(id)arg1;
- (id)processDataWithJson:(id)arg1;
- (id)parseResponseDict:(id)arg1;
- (id)procRepData:(id)arg1 infoData:(struct AFTaskInfoData)arg2;
- (id)mainActionDic;
- (id)netUtilDic;
- (id)utdid;
- (id)appInfo;
- (void)setDeviceInfo:(id)arg1;
- (id)reqDataWithProto:(id)arg1 andParam:(id)arg2 info:(struct AFTaskInfoData)arg3;
- (id)reqDataWithBizDict:(id)arg1 actDict:(id)arg2 info:(struct AFTaskInfoData)arg3;
- (void)callbackWithReqType:(id)arg1 result:(id)arg2;
- (void)postReqWithUrl:(id)arg1 showLoading:(_Bool)arg2 infoData:(struct AFTaskInfoData)arg3 headerDict:(id)arg4 requestData:(id)arg5 success:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
- (void)procReqInfo:(id)arg1 reqType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)procReqInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
