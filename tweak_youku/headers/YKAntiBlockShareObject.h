//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKShareObject.h"

@interface YKAntiBlockShareObject : YKShareObject
{
    YKShareObject *_wrappedShareObject;
}

+ (Class)subclassForAntiBlockMethodType:(unsigned long long)arg1;
+ (id)antiBlockShareObjectWithOpenplatform:(int)arg1 antiBlockMethodType:(unsigned long long)arg2;
@property(retain, nonatomic) YKShareObject *wrappedShareObject; // @synthesize wrappedShareObject=_wrappedShareObject;
- (void).cxx_destruct;
- (_Bool)isInstall;
- (_Bool)handleOpenURL:(id)arg1 application:(id)arg2;
- (_Bool)sendShareInfo:(id)arg1 withOpenPlatform:(int)arg2 withCallback:(CDUnknownBlockType)arg3;

@end

