//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager;

@interface AIASFileManager : NSObject
{
    NSFileManager *_fileManager;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)listAllFilesAt:(id)arg1;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)fileExistsAtPath:(id)arg1;
- (_Bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

