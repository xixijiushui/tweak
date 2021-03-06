//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface ResourceManager : UIView
{
    NSMutableDictionary *_characterAnimationConf;
    NSString *_downloadResourceRootPath;
    NSArray *_downloadList;
    NSDictionary *_resourcePath;
}

+ (id)getInstance;
@property(retain, nonatomic) NSDictionary *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(retain, nonatomic) NSArray *downloadList; // @synthesize downloadList=_downloadList;
@property(readonly, nonatomic) NSString *downloadResourceRootPath; // @synthesize downloadResourceRootPath=_downloadResourceRootPath;
@property(retain, nonatomic) NSMutableDictionary *characterAnimationConf; // @synthesize characterAnimationConf=_characterAnimationConf;
- (void).cxx_destruct;
- (void)allow4GDownload;
- (_Bool)is4GDownloadAllowed;
- (_Bool)needDownload;
- (id)getResourceFolderPath:(id)arg1;
- (id)getResourcePath:(id)arg1;
- (id)getResourceURL:(id)arg1;
- (void)onFileDownloadCompleted:(id)arg1;
- (void)onFileDownloadAndZipCompleted:(id)arg1;
- (void)checkUpdateListAndStartDownload;
- (void)onDownloadProgressChange:(id)arg1;
- (void)onLeaveARView;
- (void)onEnterARView;
- (void)initDefaults;

@end

