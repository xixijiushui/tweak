//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFSquareBaseCacheModel, YKFSquareCacheCheckerModel;

@interface YKFSquareCacheController : NSObject
{
    _Bool _hadStoredSquareInfo;
    YKFSquareBaseCacheModel *_cacheModel;
    YKFSquareCacheCheckerModel *_checkerModel;
    Class _cacheModelClass;
}

@property(nonatomic) _Bool hadStoredSquareInfo; // @synthesize hadStoredSquareInfo=_hadStoredSquareInfo;
@property(nonatomic) Class cacheModelClass; // @synthesize cacheModelClass=_cacheModelClass;
@property(readonly, nonatomic) YKFSquareCacheCheckerModel *checkerModel; // @synthesize checkerModel=_checkerModel;
@property(retain, nonatomic) YKFSquareBaseCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
- (void).cxx_destruct;
- (long long)lastDataVersion;
- (long long)saveCurrentDataVersion;
- (void)removeSquareInfo;
- (void)saveSquareInfo;
- (id)squareInfo;
- (void)saveCheckerInfo;
- (id)checkerInfo;
- (id)initWithSquareCacheViewModelClass:(Class)arg1;
- (id)init;
- (void)dealloc;

@end

