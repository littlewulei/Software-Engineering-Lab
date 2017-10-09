
typedef struct DataNode
{
	char*   cmd;
	char*   desc;
	void     (*handler)();
	struct  DataNode  *next;

} tDataNode;
