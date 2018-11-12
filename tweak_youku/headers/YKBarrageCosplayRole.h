//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSSet, NSString, YKBarrageUserActionModel;

@interface YKBarrageCosplayRole : NSObject <NSCopying>
{
    NSNumber *_roleId;
    NSString *_avatarUrl;
    NSString *_name;
    long long _color;
    NSSet *_allowedUserRoles;
    NSString *_promptsInfo;
    NSString *_privilegeIconUrl;
    NSString *_linkInfo;
    YKBarrageUserActionModel *_actionModel;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(copy, nonatomic) YKBarrageUserActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(copy, nonatomic) NSString *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(copy, nonatomic) NSString *privilegeIconUrl; // @synthesize privilegeIconUrl=_privilegeIconUrl;
@property(copy, nonatomic) NSString *promptsInfo; // @synthesize promptsInfo=_promptsInfo;
@property(copy, nonatomic) NSSet *allowedUserRoles; // @synthesize allowedUserRoles=_allowedUserRoles;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSNumber *roleId; // @synthesize roleId=_roleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseCosplayRoleTipsInfoFromDict:(id)arg1;
- (void)parseCosplayRoleDataFromDict:(id)arg1;

@end
