//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VEBaseMaterial : NSObject
{
    NSString *_folderPath;
}

+ (void)materialWithFolderPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)materialWithFolderPath:(id)arg1;
@property(retain, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
- (void).cxx_destruct;
- (_Bool)findPropertyWithFilePath:(id)arg1;
- (void)findMaterialAtDirectoryPath:(id)arg1;
- (id)propertyFilePathInDirectory:(id)arg1;
- (_Bool)parsePropertyDictionary:(id)arg1;
- (void)parseFolder;
- (id)initWithFolderPath:(id)arg1;

@end

