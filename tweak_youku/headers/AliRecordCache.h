//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliRecordCache : NSObject
{
}

+ (void)saveVideoAlbum:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
+ (id)newUploadRecodPath;
+ (void)removeDucumentsAllRecords;
+ (id)newDucumentsFolder;
+ (id)newDucumentsMediaFolderWithProjectId:(id)arg1;
+ (id)newDucumentsRecordData;
+ (id)newDucumentsRecordTempData;
+ (id)newDucumentsRecordVideoPathByAppendingFolder:(id)arg1;
+ (id)newDucumentsRecordVideoPathByDeleteFolder:(id)arg1;
+ (id)newDucumentsRecordSRTPathWithProjectId:(id)arg1;
+ (id)newDucumentsRecordM4APathWithProjectId:(id)arg1;
+ (id)newDucumentsRecordMp3PathWithProjectId:(id)arg1;
+ (id)newDucumentsRecordAACPathWithProjectId:(id)arg1;
+ (id)newDucumentsRecordVideoImagePathWithProjectId:(id)arg1;
+ (id)newDucumentsRecordVideoPathWithProjectId:(id)arg1;
+ (void)removeTempAllRecords;
+ (id)newTempPCMPath;
+ (id)newTempAACPath;
+ (id)newTempRecordPath;
+ (id)newRecordID;

@end
