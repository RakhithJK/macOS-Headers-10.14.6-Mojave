//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMApplicationDefinition, AMLevelIndicator, NSArray, NSBundle, NSButton, NSDatePicker, NSMutableDictionary, NSPopUpButton, NSProgressIndicator, NSTextField, NSView;

@interface AMWhoseViewItem : NSObject
{
    NSButton *_addButton;
    NSButton *_removeButton;
    NSView *_view;
    NSPopUpButton *_propertyPopUpButton;
    NSPopUpButton *_qualifierPopUpButton;
    NSPopUpButton *_valuePopUpButton;
    NSPopUpButton *_sizeValuePopUpButton;
    NSTextField *_valueTextField;
    NSTextField *_sizeValueTextField;
    NSProgressIndicator *_progressIndicator;
    NSDatePicker *_datePicker;
    AMLevelIndicator *_ratingIndicator;
    NSArray *_properties;
    NSMutableDictionary *_settings;
    AMApplicationDefinition *_applicationDefinition;
    NSBundle *_bundle;
    NSArray *_propertyNames;
    NSArray *_qualifierNames;
    NSArray *_valueNames;
    NSArray *_topLevelObjects;
}

@property __weak AMLevelIndicator *_ratingIndicator; // @synthesize _ratingIndicator;
@property __weak NSDatePicker *_datePicker; // @synthesize _datePicker;
@property __weak NSProgressIndicator *_progressIndicator; // @synthesize _progressIndicator;
@property __weak NSTextField *_sizeValueTextField; // @synthesize _sizeValueTextField;
@property __weak NSTextField *_valueTextField; // @synthesize _valueTextField;
@property __weak NSPopUpButton *_sizeValuePopUpButton; // @synthesize _sizeValuePopUpButton;
@property __weak NSPopUpButton *_valuePopUpButton; // @synthesize _valuePopUpButton;
@property __weak NSPopUpButton *_qualifierPopUpButton; // @synthesize _qualifierPopUpButton;
@property __weak NSPopUpButton *_propertyPopUpButton; // @synthesize _propertyPopUpButton;
@property(retain) NSArray *_topLevelObjects; // @synthesize _topLevelObjects;
@property(copy) NSArray *valueNames; // @synthesize valueNames=_valueNames;
@property(retain, nonatomic) NSArray *qualifierNames; // @synthesize qualifierNames=_qualifierNames;
@property(retain, nonatomic) NSArray *propertyNames; // @synthesize propertyNames=_propertyNames;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) AMApplicationDefinition *applicationDefinition; // @synthesize applicationDefinition=_applicationDefinition;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)changeValue:(id)arg1;
- (void)changeQualifier:(id)arg1;
- (void)changeProperty:(id)arg1;
- (void)_addLocalizedItemsWithTitles:(id)arg1 toPopUpButton:(id)arg2;
- (id)_applicationDefinitionBundle;
- (id)_propertyWithName:(id)arg1;
- (id)_qualifiersNamesForType:(id)arg1;
- (id)_qualifiers;
- (void)_releaseTopLevelObjects;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithProperties:(id)arg1 settings:(id)arg2 andApplicationDefinition:(id)arg3;
- (id)init;

@end

