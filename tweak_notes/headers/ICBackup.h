//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICBackup : NSObject
{
}

+ (_Bool)loadArchive:(id)arg1 merge:(_Bool)arg2 error:(id *)arg3;
+ (id)createArchive:(id *)arg1;
+ (void)sanitizeAssetsForSavingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 prefix:(id)arg3;
+ (void)sanitizeAndCopyAssetsForSavingFromRecord:(id)arg1 toAssetsDirectoryURL:(id)arg2;
+ (void)sanitizeAssetsForLoadingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (id)recordFromObjectDictionary:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (void)loadBackupWithObjectDictionaries:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (_Bool)loadBackupFromURL:(id)arg1 merge:(_Bool)arg2;
+ (void)loadBackupFromURL:(id)arg1;
+ (_Bool)hardLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2;
+ (id)dictionaryFromCloudObject:(id)arg1 savingAssetsToDirectory:(id)arg2;
+ (id)allObjectsToSave;
+ (id)saveBackupToParentDirectoryURL:(id)arg1 atomically:(_Bool)arg2;
+ (id)saveBackupToParentDirectoryURL:(id)arg1;
+ (_Bool)createDirectoryAtURL:(id)arg1;
+ (id)saveNewBackup;
+ (id)backupNameForDate:(id)arg1;
+ (void)purgeOldBackups;
+ (id)nameFromBackupAtURL:(id)arg1;
+ (_Bool)isValidBackupURL:(id)arg1;
+ (id)unarchiverAllowedClasses;
+ (id)backupsParentDirectoryURL;

@end
