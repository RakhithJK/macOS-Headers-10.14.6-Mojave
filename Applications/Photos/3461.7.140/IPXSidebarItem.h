//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface IPXSidebarItem : NSObject
{
    BOOL _isGroup;
    BOOL _isExpandable;
    BOOL _isEditable;
    id _representedObject;
    CDUnknownBlockType _ejectAction;
    NSImage *_image;
    NSString *_title;
    NSString *_uuid;
}

+ (id)keyedValuesForObject:(id)arg1;
+ (id)identifierForObject:(id)arg1;
+ (id)placeholderIconForFolder:(id)arg1;
+ (id)placeholderIconForAlbum:(id)arg1;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType ejectAction; // @synthesize ejectAction=_ejectAction;
@property(readonly, nonatomic) BOOL isExpandable; // @synthesize isExpandable=_isExpandable;
@property(readonly, nonatomic) BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)description;
- (void)eject:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;

@end

