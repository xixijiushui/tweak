//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface DYKBundleConfigurationItem : NSObject <NSCoding>
{
    NSString *_bundleName;
    NSArray *_objectList;
    NSArray *_urlHanelerList;
    NSArray *_servicesHandlerList;
    NSString *_bundleClass;
}

@property(copy, nonatomic) NSString *bundleClass; // @synthesize bundleClass=_bundleClass;
@property(retain, nonatomic) NSArray *servicesHandlerList; // @synthesize servicesHandlerList=_servicesHandlerList;
@property(retain, nonatomic) NSArray *urlHanelerList; // @synthesize urlHanelerList=_urlHanelerList;
@property(retain, nonatomic) NSArray *objectList; // @synthesize objectList=_objectList;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)canRouteURL:(id)arg1;
- (id)initWithBundleConfiguration:(id)arg1;

@end

