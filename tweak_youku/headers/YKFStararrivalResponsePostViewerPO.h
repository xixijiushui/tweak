//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFStararrivalPermissionPO;

@interface YKFStararrivalResponsePostViewerPO : YKFAPIModel
{
    _Bool _isLike;
    long long _adminRight;
    YKFStararrivalPermissionPO *_permissionVO;
}

@property(retain, nonatomic) YKFStararrivalPermissionPO *permissionVO; // @synthesize permissionVO=_permissionVO;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) long long adminRight; // @synthesize adminRight=_adminRight;
- (void).cxx_destruct;

@end

