//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class TSKAddedToDocumentContext, TSKDocumentRoot;

@protocol TSKDocumentObject
- (void)wasRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)willBeRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)wasAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
- (void)willBeAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
@end

