//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSCallback;

@interface LSBaiChuanManager : NSObject
{
    LSCallback *_mcallback;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LSCallback *mcallback; // @synthesize mcallback=_mcallback;
- (void).cxx_destruct;
- (id)ybhpss:(id)arg1 withUrl:(id)arg2;
- (void)addBaiChuanCarWithitemID:(id)arg1 taoKeUnionId:(id)arg2 taoKeSubPid:(id)arg3 taoKePid:(id)arg4 trackParams:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;
- (void)getBaiChuanCouponWithSupplierID:(id)arg1 uuid:(id)arg2 couponInstanceSource:(id)arg3 asac:(id)arg4 trackParams:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;

@end

