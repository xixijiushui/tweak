//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface YKBarrageTaskRoles : NSObject
{
    NSSet *_roles;
    double _updatedTime;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(nonatomic) double updatedTime; // @synthesize updatedTime=_updatedTime;
@property(retain, nonatomic) NSSet *roles; // @synthesize roles=_roles;
- (void).cxx_destruct;
- (_Bool)isExpired;

@end

