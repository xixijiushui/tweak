//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildBaseWeexJSBundleManager : NSObject
{
    NSString *_documentDirPath;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *documentDirPath; // @synthesize documentDirPath=_documentDirPath;
- (void).cxx_destruct;
- (void)downloadJSBundleWithURL:(id)arg1 dirName:(id)arg2;
- (id)filePathStringWithURL:(id)arg1;
- (_Bool)checkExistanceWithURL:(id)arg1;
- (id)init;

@end
