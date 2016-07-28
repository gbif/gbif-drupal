### Search behaviour
Drupal has been using ?q= for URL handling, hence it's so called "clean URL" feature. For example, http://cms.gbif-dev.org/api/v2/search is essentially the rewrite of http://cms.gbif-dev.org/?=api/v2/search. Therefore, to indicate the string for searching, we only need to add it to the end of endpoint:
- http://cms.gbif-dev.org/api/v2/search/bid, where "bid" is the string to search for.

#### Paging
Paging of the results is done using "page[number]" and "page[size]" parameter, where page[size] is the number of result to show per request:
- http://cms.gbif-dev.org/api/v2/search/bid?page[size]=5&page[number]=2


#### Sorting
Results can be sorted using the available properties. For example, to sort by entity_id:
- http://cms.gbif-dev.org/api/v2/search/bid?page[size]=5&sort=entity_id

To sort descending by entity_id, add an hyphen to the property:
- http://cms.gbif-dev.org/api/v2/search/bid?page[size]=5&sort=-entity_id

By default the result is sorted by relevance.


#### Filtering
Available properties can be used for filtering. For example, to get news type:
- http://cms.gbif-dev.org/api/v2/search/bid?filter[type]=news

Multiple filters can be applied. They work using _AND_ conjunction:
- http://cms.gbif-dev.org/api/v2/search/bid?filter[type]=news&filter[category_topic]=968&filter[language]=pt

Multiple filters of the same field is **NOT** supported at the moment:
- http://cms.gbif-dev.org/api/v2/search/bid?filter[type]=news&filter[type]=event