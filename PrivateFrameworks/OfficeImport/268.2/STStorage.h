//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/STSStgObject.h>

@interface STStorage : STSStgObject
{
    struct _Storage *m_pCStorage;
}

- (void)setClass:(CDStruct_214f2dba)arg1;
- (int)getChildType:(id)arg1;
- (id)getChildrenInfo;
- (id)getInfo;
- (id)openStorage:(id)arg1 withMode:(int)arg2;
- (id)openStream:(id)arg1 withMode:(int)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithCStorage:(struct _Storage *)arg1;
- (id)init;

@end

